//
// Created by Alex on 1/8/2022.
//

#ifndef GAMESERVER_MOVEORDER_H
#define GAMESERVER_MOVEORDER_H

#include "CloneableBaseComponent.h"

struct MoveOrder : public CloneableBaseComponent<MoveOrder>
{
	// TODO: think about getting separate Vector2 or Point
	MoveOrder(std::string& name, float x, float y);
	float target_x;
	float target_y;
};


#endif //GAMESERVER_MOVEORDER_H
