//
// Created by alex on 23.11.2021.
//

#include "DamageComponent.h"

DamageComponent::DamageComponent(ComponentArgs& args)
	:
	CloneableBaseComponent(DamageComponent::component_name),
	dmg(args.get_arg<float>(0))
{

}

DamageComponent::DamageComponent(float dmg)
	:
	CloneableBaseComponent(DamageComponent::component_name),
	dmg(dmg)
{

}
