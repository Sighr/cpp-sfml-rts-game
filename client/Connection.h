//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_CONNECTION_H
#define GAMESERVER_CONNECTION_H


#include <memory>
#include <SFML/Network/UdpSocket.hpp>

struct Connection
{
	std::unique_ptr<sf::UdpSocket> socket;
	sf::IpAddress ip;
	ushort port;
	std::string my_name;
};


#endif //GAMESERVER_CONNECTION_H
