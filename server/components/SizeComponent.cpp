//
// Created by alex on 14.12.2021.
//

#include "SizeComponent.h"

SizeComponent::SizeComponent(ComponentArgs &args)
        :
        CloneableBaseComponent(SizeComponent::component_name),
        x(args.get_arg<float>(0)),
        y(args.get_arg<float>(1))
{

}

SizeComponent::SizeComponent(float x, float y)
        :
        CloneableBaseComponent(SizeComponent::component_name),
        x(x),
        y(y)
{

}
