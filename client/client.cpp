//
// Created by alex on 26.07.21.
//

#include <SFML/Network.hpp>
#include <iostream>

int main()
{
	sf::UdpSocket socket;
	ushort port;
	std::cout << "Enter port" << std::endl;
	std::cin >> port;
	std::cout << "Sending packets to port " << port << std::endl;
	const sf::IpAddress& ipAddress = sf::IpAddress("127.0.0.1");
	while (true)
	{
		sf::Packet packet;
		std::string data;
		std::cout << "Enter data " << std::endl;
		std::cin >> data;
		if (data == "exit")
		{
			break;
		}
		std::cout << "Sending data: " << data << std::endl;
		packet << data;
		socket.send(packet, ipAddress, port);
	}
}
