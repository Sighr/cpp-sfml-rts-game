//
// Created by alex on 25.10.21.
//

#include "CoordinateComponent.h"

CoordinateComponent::CoordinateComponent(std::string& name, ComponentArgs& args)
	:
	CloneableBaseComponent(name),
	x(args.get_arg<float>(0)),
	y(args.get_arg<float>(1))
{

}

CoordinateComponent::CoordinateComponent(std::string& name, float x, float y)
	:
	CloneableBaseComponent(name),
	x(x),
	y(y)
{

}
