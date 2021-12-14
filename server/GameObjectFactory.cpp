//
// Created by alex on 29.10.21.
//

#include "GameObjectFactory.h"

#include <memory>

GameObjectFactory::GameObjectFactory(std::string& config_path)
 : creator(config_path)
{
	object_templates = creator.get_objects_from_config();
}

std::shared_ptr<GameObject> GameObjectFactory::create_object(std::string name)
{
	// try-catch or maybe precheck with std::map<ConcreteComponent>.find(...)
	GameObject& object_template = object_templates[name];
	return std::make_shared<GameObject>(object_template);
}
