//
// Created by alex on 25.10.21.
//

#ifndef GAMESERVER_HPCOMPONENT_H
#define GAMESERVER_HPCOMPONENT_H


#include "CloneableBaseComponent.h"
#include "ComponentArgs.h"

struct HPComponent : public CloneableBaseComponent<HPComponent>
{
	explicit HPComponent(ComponentArgs& args);
	explicit HPComponent(int hp);
	int hp;
	inline static const std::string component_name = "hp";
};


#endif //GAMESERVER_HPCOMPONENT_H
