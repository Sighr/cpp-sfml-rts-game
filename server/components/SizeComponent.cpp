//
// Created by alex on 14.12.2021.
//

#include "SizeComponent.h"

SizeComponent::SizeComponent(std::string &name, ComponentArgs &args)
        :
        CloneableBaseComponent(name),
        x(args.get_arg<float>(0)),
        y(args.get_arg<float>(1))
{

}

SizeComponent::SizeComponent(std::string &name, float x, float y)
        :
        CloneableBaseComponent(name),
        x(x),
        y(y)
{

}
