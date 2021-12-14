//
// Created by alex on 07.08.21.
//

#ifndef GAMESERVER_GAMECOMMAND_H
#define GAMESERVER_GAMECOMMAND_H


#include <SFML/Network/Packet.hpp>
// TODO: think about structure and potential commands. implement
struct GameCommand
{
	std::string type;
	std::shared_ptr<GameObject> subject;
	std::vector<std::shared_ptr<GameObject>> additional_objects;
	std::vector<int> additional_data;
};

sf::Packet& operator<<(sf::Packet& packet, GameCommand& command)
{

}

sf::Packet& operator>>(sf::Packet& packet, GameCommand& command)
{

}

#endif //GAMESERVER_GAMECOMMAND_H
