//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_CONNECTSCREEN_H
#define GAMESERVER_CONNECTSCREEN_H


#include "../BaseScreen.h"
#include "../../widgets/TextInput.h"
#include "../../widgets/Button.h"
#include "../../Connection.h"

class ConnectScreen : public BaseScreen
{
public:
	explicit ConnectScreen(const sf::Window& window);
	Status process_event(sf::Event& event, sf::Window& window, Client& client) override;
	Status draw(sf::RenderWindow& window) override;
private:
	std::optional<Connection> attempt_connection(const std::string& client_name, const sf::IpAddress& server_ip, ushort server_port);
	TextInput ip;
	TextInput port;
	TextInput name;
	Button connect_button;
	void display_error(const std::string& text_to_display);
};


#endif //GAMESERVER_CONNECTSCREEN_H
