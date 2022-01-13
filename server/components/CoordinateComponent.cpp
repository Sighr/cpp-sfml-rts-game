//
// Created by alex on 25.10.21.
//

#include "CoordinateComponent.h"

CoordinateComponent::CoordinateComponent(ComponentArgs& args)
	:
	CloneableBaseComponent(CoordinateComponent::component_name),
	x(args.get_arg<float>(0)),
	y(args.get_arg<float>(1))
{

}

CoordinateComponent::CoordinateComponent(float x, float y)
	:
	CloneableBaseComponent(CoordinateComponent::component_name),
	x(x),
	y(y)
{

}
