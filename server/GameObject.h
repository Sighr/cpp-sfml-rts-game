//
// Created by alex on 06.08.21.
//

#ifndef GAMESERVER_GAMEOBJECT_H
#define GAMESERVER_GAMEOBJECT_H


#include <map>
#include <memory>
#include "components/BaseComponent.h"

class GameObject
{
public:
	GameObject() = default;
	GameObject(const GameObject& other);
	GameObject(GameObject&& other);
	GameObject& operator=(const GameObject&) = delete;
	GameObject& operator=(GameObject&&) = delete;
	void set_initial_coordinates(float x, float y);
	void add_component(std::shared_ptr<BaseComponent> component);
	void remove_component(std::string& name);
	std::optional<std::shared_ptr<BaseComponent>> get_component_safe(std::string& name);
	std::shared_ptr<BaseComponent> get_component_or_fail(std::string& name);
private:
	std::map<std::string, std::shared_ptr<BaseComponent>> components;
};


#endif //GAMESERVER_GAMEOBJECT_H
