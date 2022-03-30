//
// Created by alex on 06.08.21.
//

#include <SFML/Network/UdpSocket.hpp>
#include <SFML/System/Clock.hpp>
#include "CommandReceiverSystem.h"

CommandReceiverSystem::CommandReceiverSystem(sf::UdpSocket& receiver)
	:
	receiver(receiver)
{
	receiver.setBlocking(false);
}

void CommandReceiverSystem::update(std::map<GameObjectId, GameObject>& objects, std::vector<Player>& players, sf::Time time)
{
	sf::Clock clock;
	do
	{
		sf::Packet packet;
		ushort port;
		sf::IpAddress ip;
		sf::Socket::Status result = receiver.receive(packet, ip, port);
		
		if (result == sf::Socket::NotReady)
		{
			break;
		}
		
		for (auto& player : players)
		{
			if (port == player.port && ip == player.ip)
			{
				process_packet(objects, packet, player);
			}
		}
	} while (clock.getElapsedTime().asMilliseconds() < RECEIVE_TIMEOUT_MILLISECONDS);
}

void CommandReceiverSystem::process_packet(std::map<GameObjectId, GameObject>& objects, sf::Packet& packet, Player& player)
{

}
