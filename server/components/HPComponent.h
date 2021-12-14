//
// Created by alex on 25.10.21.
//

#ifndef GAMESERVER_HPCOMPONENT_H
#define GAMESERVER_HPCOMPONENT_H


#include "CloneableBaseComponent.h"
#include "ComponentArgs.h"

struct HPComponent : public CloneableBaseComponent<HPComponent>
{
	HPComponent(std::string& name, ComponentArgs& args);
	HPComponent(std::string& name, int hp);
	int hp;
};


#endif //GAMESERVER_HPCOMPONENT_H
