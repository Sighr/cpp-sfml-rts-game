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
	explicit PlayerBelongingComponent(Player& player);
	Player& player;
	inline static const std::string component_name = "player";
};


#endif //GAMESERVER_PLAYERBELONGINGCOMPONENT_H
