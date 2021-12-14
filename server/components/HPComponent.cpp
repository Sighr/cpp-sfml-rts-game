//
// Created by alex on 25.10.21.
//

#include "HPComponent.h"

HPComponent::HPComponent(std::string& name, ComponentArgs& args)
	:
	CloneableBaseComponent(name),
	hp(args.get_arg<int>(0))
{

}

HPComponent::HPComponent(std::string& name, int hp)
	:
	CloneableBaseComponent(name),
	hp(hp)
{

}
