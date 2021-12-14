//
// Created by alex on 06.08.21.
//

#ifndef GAMESERVER_COMMANDRECEIVERSYSTEM_H
#define GAMESERVER_COMMANDRECEIVERSYSTEM_H


#include <SFML/Network/Packet.hpp>
#include "GameSystem.h"
#include "../shared/util/MultithreadQueue.h"
#include "../shared/util/GameCommand.h"

class CommandReceiverSystem : public GameSystem
{
public:
	void update(std::vector<std::shared_ptr<GameObject>>& objects, sf::Time time) override;
	void receive_packet(sf::Packet& packet);
private:
	MultithreadQueue<GameCommand> queue;
};


#endif //GAMESERVER_COMMANDRECEIVERSYSTEM_H
