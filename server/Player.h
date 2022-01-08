//
// Created by Alex on 1/3/2022.
//

#ifndef GAMESERVER_PLAYER_H
#define GAMESERVER_PLAYER_H


#include <SFML/Network/IpAddress.hpp>

class Player
{
private:
	sf::IpAddress ip;
	ushort port;
	std::string name;
	int player_id;
};


#endif //GAMESERVER_PLAYER_H
