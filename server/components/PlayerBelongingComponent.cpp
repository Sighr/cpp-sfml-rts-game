//
// Created by Alex on 1/3/2022.
//

#include "PlayerBelongingComponent.h"

PlayerBelongingComponent::PlayerBelongingComponent(Player& player)
	:
	CloneableBaseComponent(PlayerBelongingComponent::component_name),
	player(player)
{

}

