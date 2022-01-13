//
// Created by Alex on 1/8/2022.
//

#include "MoveOrder.h"

MoveOrder::MoveOrder(float x, float y)
	:
	CloneableBaseComponent<MoveOrder>(MoveOrder::component_name),
	target_x(x),
	target_y(y)
{

}
