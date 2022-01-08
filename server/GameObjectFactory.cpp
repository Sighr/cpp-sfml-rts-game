//
// Created by alex on 29.10.21.
//

#include "GameObjectFactory.h"

#include <memory>

GameObjectFactory::GameObjectFactory(std::string& config_path, std::map<GameObjectId, GameObject>& registered_objects)
	:
	creator(config_path),
	registered_objects(registered_objects),
	id_counter(0)
{
	object_templates = creator.get_objects_from_config();
}

GameObject GameObjectFactory::create_object(std::string name)
{
	// try-catch or maybe precheck with std::map<ConcreteGameObject>.find(...)
	GameObject& object_template = object_templates[name];
	auto pair = registered_objects.emplace(id_counter++, object_template);
	auto& gameObject = pair.first->second;
	gameObject.id = pair.first->first;
	return gameObject;
}
