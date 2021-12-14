//
// Created by alex on 25.10.21.
//

#ifndef GAMESERVER_COORDINATECOMPONENT_H
#define GAMESERVER_COORDINATECOMPONENT_H


#include "CloneableBaseComponent.h"
#include "ComponentArgs.h"

struct CoordinateComponent : public CloneableBaseComponent<CoordinateComponent>
{
	CoordinateComponent(std::string& name, ComponentArgs& args);
	CoordinateComponent(std::string& name, float x, float y);
	float x;
	float y;
};


#endif //GAMESERVER_COORDINATECOMPONENT_H
