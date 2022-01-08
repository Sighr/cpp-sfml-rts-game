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
#include "systems/GameSystem.h"
#include "GameObjectFactory.h"
#include "components/ComponentFactory.h"
#include "Player.h"

class Game
{
	// swapped private and public to set objects initialized before gameobject_factory
private:
	bool stop = false;
	void update_game(sf::Time time);
	void register_players();
	void init_game();
	std::map<GameObjectId, GameObject> objects;
	std::list<std::unique_ptr<GameSystem>> systems;
	// TODO: think about container
	std::vector<Player> players;
public:
	explicit Game(std::string& gameobject_config_path);
	void run();
	GameObjectFactory gameobject_factory;
	ComponentFactory component_factory;
};


#endif //GAMESERVER_GAME_H
