//
// Created by alex on 28.07.21.
//

#ifndef GAMESERVER_GAME_H
#define GAMESERVER_GAME_H


#include <SFML/System/Time.hpp>
#include <vector>
#include <list>
#include <memory>
#include "GameObject.h"
#include "GameSystem.h"
#include "GameObjectFactory.h"
#include "components/ComponentFactory.h"

class Game
{
public:
	explicit Game(std::string& gameobject_config_path);
	void run();
	GameObjectFactory gameobject_factory;
	ComponentFactory component_factory;
private:
	bool stop = false;
	void update_game(sf::Time time);
	void init_game();
	std::vector<std::shared_ptr<GameObject>> objects;
	std::list<std::unique_ptr<GameSystem>> systems;
};


#endif //GAMESERVER_GAME_H
