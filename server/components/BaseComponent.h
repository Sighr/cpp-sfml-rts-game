//
// Created by alex on 25.10.21.
//

#ifndef GAMESERVER_BASECOMPONENT_H
#define GAMESERVER_BASECOMPONENT_H

#include <string>

class BaseComponent
{
public:
	explicit BaseComponent(std::string& name) : name(std::move(name)) {};
	[[nodiscard]] virtual BaseComponent* clone() const = 0;
	const std::string name;
};


#endif //GAMESERVER_BASECOMPONENT_H
