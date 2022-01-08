//
// Created by Alex on 1/3/2022.
//

#include "PlayerBelongingComponent.h"

PlayerBelongingComponent::PlayerBelongingComponent(std::string& name, Player& player)
	:
	CloneableBaseComponent(name),
	player(player)
{

}

