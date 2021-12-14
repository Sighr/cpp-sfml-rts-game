//
// Created by alex on 23.11.2021.
//

#ifndef GAMESERVER_DAMAGECOMPONENT_H
#define GAMESERVER_DAMAGECOMPONENT_H

#include "CloneableBaseComponent.h"

struct DamageComponent : public CloneableBaseComponent<DamageComponent>
{
	DamageComponent(std::string& name, ComponentArgs& args);
	DamageComponent(std::string& name, float dmg);
	float dmg;
};


#endif //GAMESERVER_DAMAGECOMPONENT_H
