//
// Created by Alex on 1/3/2022.
//

#ifndef GAMESERVER_PLAYERBELONGINGCOMPONENT_H
#define GAMESERVER_PLAYERBELONGINGCOMPONENT_H


#include "CloneableBaseComponent.h"
#include "../Player.h"

struct PlayerBelongingComponent : public CloneableBaseComponent<PlayerBelongingComponent>
{
public:
	PlayerBelongingComponent(std::string& name, std::weak_ptr<Player> player);
	std::weak_ptr<Player> player;
};


#endif //GAMESERVER_PLAYERBELONGINGCOMPONENT_H
