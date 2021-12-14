//
// Created by alex on 23.11.2021.
//

#include "DamageComponent.h"

DamageComponent::DamageComponent(std::string& name, ComponentArgs& args)
	:
	CloneableBaseComponent(name),
	dmg(args.get_arg<float>(0))
{

}

DamageComponent::DamageComponent(std::string& name, float dmg)
	:
	CloneableBaseComponent(name),
	dmg(dmg)
{

}
