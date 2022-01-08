//
// Created by Alex on 1/8/2022.
//

#include "MoveOrder.h"

MoveOrder::MoveOrder(std::string& name, float x, float y)
	:
	CloneableBaseComponent<MoveOrder>(name),
	target_x(x),
	target_y(y)
{

}
