//
// Created by alex on 06.08.21.
//

#ifndef GAMESERVER_GAMESYSTEM_H
#define GAMESERVER_GAMESYSTEM_H


#include <vector>
#include <SFML/System/Time.hpp>
#include "GameObject.h"

class GameSystem
{
public:
	virtual void update(std::vector<std::shared_ptr<GameObject>>& objects, sf::Time time) = 0;
};


#endif //GAMESERVER_GAMESYSTEM_H
