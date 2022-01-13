//
// Created by alex on 25.10.21.
//

#ifndef GAMESERVER_BASECOMPONENT_H
#define GAMESERVER_BASECOMPONENT_H

#include <string>
#include <utility>

class BaseComponent
{
public:
	explicit BaseComponent(std::string name) : name(std::move(name)) {};
	[[nodiscard]] virtual BaseComponent* clone() const = 0;
	const std::string name;
};

template <typename T>
concept AnyComponent = std::is_base_of_v<BaseComponent, T>;


#endif //GAMESERVER_BASECOMPONENT_H
