//
// Created by alex on 23.11.2021.
//

#ifndef GAMESERVER_DAMAGECOMPONENT_H
#define GAMESERVER_DAMAGECOMPONENT_H

#include "CloneableBaseComponent.h"

struct DamageComponent : public CloneableBaseComponent<DamageComponent>
{
	explicit DamageComponent(ComponentArgs& args);
	explicit DamageComponent(float dmg);
	float dmg;
	inline static const std::string component_name = "dmg";
};


#endif //GAMESERVER_DAMAGECOMPONENT_H
