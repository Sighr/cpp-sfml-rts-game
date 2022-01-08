//
// Created by alex on 06.08.21.
//

#ifndef GAMESERVER_GAMESYSTEM_H
#define GAMESERVER_GAMESYSTEM_H


#include <vector>
#include <SFML/System/Time.hpp>
#include <list>
#include "../GameObject.h"
#include "../../shared/util/util.h"
#include "../Player.h"

class GameSystem
{
public:
	virtual void update(std::map<GameObjectId, GameObject>& objects, std::vector<Player>& players, sf::Time time) = 0;
};


#endif //GAMESERVER_GAMESYSTEM_H
