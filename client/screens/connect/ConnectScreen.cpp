//
// Created by alex on 30.03.2022.
//

#include <charconv>
#include <SFML/Network.hpp>
#include "ConnectScreen.h"
#include "../game/GameScreen.h"
#include "../../Client.h"

ConnectScreen::ConnectScreen(const sf::Window& window)
	:
	ip(window.getSize().x * 0.1f, window.getSize().y * 0.1f, 300), port(
	window.getSize().x * 0.1f, window.getSize().y * 0.2f, 90), name(
	window.getSize().x * 0.1f, window.getSize().y * 0.3f, 300), connect_button("Connect",
																			   window.getSize().x * 0.1f,
																			   window.getSize().y * 0.4f)
{

}

BaseScreen::Status ConnectScreen::process_event(sf::Event& event, sf::Window& window, Client& client)
{
	ip.process_event(event, window);
	port.process_event(event, window);
	name.process_event(event, window);
	connect_button.process_event(event, window);
	if(connect_button.is_clicked)
	{
		const auto server_ip = sf::IpAddress(ip.text.getString().toAnsiString());
		const auto client_name = name.text.getString().toAnsiString();
		const auto port_string = port.text.getString().toAnsiString();
		ushort server_port;
		auto[ptr, ec] = std::from_chars(port_string.data(), port_string.data() + port_string.size(), server_port);
		if(ec != std::errc{})
		{
			display_error("Invalid port");
		}
		auto connection = attempt_connection(client_name, server_ip, server_port);
		if(connection.has_value())
		{
			client.setScreen(std::unique_ptr<BaseScreen>(new GameScreen(std::move(connection.value()))));
		}
	}
	return Success;
}

BaseScreen::Status ConnectScreen::draw(sf::RenderWindow& window)
{
	ip.draw(window);
	port.draw(window);
	name.draw(window);
	connect_button.draw(window);
	return Success;
}

std::optional<Connection> ConnectScreen::attempt_connection(const std::string& client_name, const sf::IpAddress& server_ip, ushort server_port)
{
	std::unique_ptr<sf::UdpSocket> socket;
	// TODO: think about moving connection logic to a separate class
	while(true)
	{
		sf::Packet packet;
		packet << client_name;
		socket->send(packet, server_ip, server_port);
		
		sf::IpAddress response_ip;
		ushort response_port;
		socket->receive(packet, response_ip, response_port);
		
		// check packet contents to ensure server is ready to accept us // TODO: move to config and document
		std::string response_string;
		if(!(packet >> response_string) || response_string != "Registered")
		{
			// TODO: tell ConnectScreen server's response
			return {};
		}
		
		if(response_ip == server_ip && response_port == server_port)
		{
			return std::optional(Connection{
				.socket = std::move(socket),
				.ip = server_ip,
				.port = server_port,
				.my_name = client_name
			});
		}
		else
		{
			return {};
		}
	}
}

void ConnectScreen::display_error(const std::string& text_to_display)
{
	// TODO: implement
}
