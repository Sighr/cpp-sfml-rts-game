//
// Created by Alex on 1/8/2022.
//

#ifndef GAMESERVER_ATTACKORDER_H
#define GAMESERVER_ATTACKORDER_H

#include "CloneableBaseComponent.h"
#include "../GameObject.h"
#include "../../shared/util/util.h"

struct AttackOrder : CloneableBaseComponent<AttackOrder>
{
	explicit AttackOrder(GameObjectId target);
	GameObjectId target;
	inline static const std::string component_name = "attack_order";
};


#endif //GAMESERVER_ATTACKORDER_H
