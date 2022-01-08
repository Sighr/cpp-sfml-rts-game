//
// Created by alex on 06.08.21.
//

#include "CommandReceiverSystem.h"

void CommandReceiverSystem::update(std::vector<std::shared_ptr<GameObject>>& objects, sf::Time time)
{

}

void CommandReceiverSystem::receive_packet(sf::Packet& packet)
{
	// TODO: move to custom objectpool allocator
	auto command = new GameCommand();
	packet >> *command;
	queue.push(command);
}
