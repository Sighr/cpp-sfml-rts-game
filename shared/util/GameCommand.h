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
	GameObjectId subject;
	std::vector<GameObjectId> additional_objects;
	std::vector<int> additional_data;
};

sf::Packet& operator<<(sf::Packet& packet, GameCommand& command)
{
	packet << command.type;
	packet << command.subject;
	packet << static_cast<int>(command.additional_objects.size());
	for (auto id : command.additional_objects)
	{
		packet << id;
	}
	packet << static_cast<int>(command.additional_data.size());
	for (auto value : command.additional_data)
	{
		packet << value;
	}
}

sf::Packet& operator>>(sf::Packet& packet, GameCommand& command)
{
	packet >> command.type;
	packet >> command.subject;
	// TODO: think about extracting this as a macro or function (how?)
	int additional_objects_number;
	packet >> additional_objects_number;
	command.additional_objects.resize(additional_objects_number);
	for (int i = 0; i < additional_objects_number; ++i)
	{
		packet >> command.additional_objects[i];
	}
	int additional_data_number;
	packet >> additional_data_number;
	command.additional_data.resize(additional_data_number);
	for (int i = 0; i < additional_data_number; ++i)
	{
		packet >> command.additional_data[i];
	}
}

#endif //GAMESERVER_GAMECOMMAND_H
