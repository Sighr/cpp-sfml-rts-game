//
// Created by alex on 06.08.21.
//

#ifndef GAMESERVER_COMMANDRECEIVERSYSTEM_H
#define GAMESERVER_COMMANDRECEIVERSYSTEM_H


#include <SFML/Network/Packet.hpp>
#include <list>
#include "GameSystem.h"
#include "../../shared/util/MultithreadQueue.h"
#include "../../shared/util/GameCommand.h"

class CommandReceiverSystem : public GameSystem
{
public:
	void update(std::map<GameObjectId, GameObject>& objects, std::vector<Player>& players, sf::Time time) override;
	void receive_packet(sf::Packet& packet);
private:
	MultithreadQueue<GameCommand> queue;
};


#endif //GAMESERVER_COMMANDRECEIVERSYSTEM_H
