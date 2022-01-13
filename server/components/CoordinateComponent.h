//
// Created by alex on 25.10.21.
//

#ifndef GAMESERVER_COORDINATECOMPONENT_H
#define GAMESERVER_COORDINATECOMPONENT_H


#include "CloneableBaseComponent.h"
#include "ComponentArgs.h"

struct CoordinateComponent : public CloneableBaseComponent<CoordinateComponent>
{
	explicit CoordinateComponent(ComponentArgs& args);
	CoordinateComponent(float x, float y);
	float x;
	float y;
	inline static const std::string component_name = "coord";
};


#endif //GAMESERVER_COORDINATECOMPONENT_H
