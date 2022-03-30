//
// Created by alex on 06.08.21.
//

#ifndef GAMESERVER_COMMANDRECEIVERSYSTEM_H
#define GAMESERVER_COMMANDRECEIVERSYSTEM_H


#include <SFML/Network/Packet.hpp>
#include <list>
#include "GameSystem.h"
#include "../../shared/util/GameCommand.h"

class CommandReceiverSystem : public GameSystem
{
public:
	explicit CommandReceiverSystem(sf::UdpSocket& receiver);
	void update(std::map<GameObjectId, GameObject>& objects, std::vector<Player>& players, sf::Time time) override;
private:
	void process_packet(std::map<GameObjectId, GameObject>& objects, sf::Packet& packet, Player& player);
	sf::UdpSocket& receiver;
	
	constexpr static int RECEIVE_TIMEOUT_MILLISECONDS = 500;
};


#endif //GAMESERVER_COMMANDRECEIVERSYSTEM_H
