//
// Created by Alex on 1/8/2022.
//

#include "AttackOrder.h"

AttackOrder::AttackOrder(GameObjectId target)
	:
	CloneableBaseComponent<AttackOrder>(AttackOrder::component_name),
	target(target)
{

}
