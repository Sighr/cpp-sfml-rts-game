//
// Created by Alex on 1/3/2022.
//

#include "PlayerBelongingComponent.h"

PlayerBelongingComponent::PlayerBelongingComponent(std::string& name, std::weak_ptr<Player> player)
	:
	CloneableBaseComponent(name),
	player(player)
{

}

