//
// Created by Alex on 1/8/2022.
//

#include "AttackOrder.h"

AttackOrder::AttackOrder(std::string& name, GameObjectId target)
	:
	CloneableBaseComponent<AttackOrder>(name),
	target(target)
{

}
