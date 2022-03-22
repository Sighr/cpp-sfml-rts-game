//
// Created by alex on 06.08.21.
//

#include "CommandReceiverSystem.h"

void CommandReceiverSystem::update(std::map<GameObjectId, GameObject>& objects, std::vector<Player>& players, sf::Time time)
{

}

void CommandReceiverSystem::receive_packet(sf::Packet& packet)
{
	GameCommand command;
	packet >> command;
	queue.push(command);
}
