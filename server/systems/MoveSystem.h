//
// Created by Alex on 1/8/2022.
//

#ifndef GAMESERVER_MOVESYSTEM_H
#define GAMESERVER_MOVESYSTEM_H


#include "GameSystem.h"

class MoveSystem : public GameSystem
{
public:
	void update(std::map<GameObjectId, GameObject>& objects, std::vector<Player>& players, sf::Time time) override;
};


#endif //GAMESERVER_MOVESYSTEM_H
