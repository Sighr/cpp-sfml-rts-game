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
	AttackOrder(std::string& name, GameObjectId target);
	GameObjectId target;
};


#endif //GAMESERVER_ATTACKORDER_H
