//
// Created by alex on 25.10.21.
//

#include "HPComponent.h"

HPComponent::HPComponent(ComponentArgs& args)
	:
	CloneableBaseComponent(HPComponent::component_name),
	hp(args.get_arg<int>(0))
{

}

HPComponent::HPComponent(int hp)
	:
	CloneableBaseComponent(HPComponent::component_name),
	hp(hp)
{

}
