//
// Created by alex on 28.07.21.
//

#include "Game.h"
#include <SFML/System.hpp>

void Game::run()
{
	register_players();
	init_game();
	sf::Clock clock;
	while (!stop)
	{
		sf::Time elapsed = clock.restart();
		update_game(elapsed);
	}
}

void Game::update_game(sf::Time time)
{
	for (auto& system : systems)
	{
		system->update(objects, players, time);
	}
}

Game::Game(std::string& gameobject_config_path)
	: gameobject_factory(gameobject_config_path, objects)
{

}

void Game::init_game()
{
	// TODO: init from config
	
	auto base1 = gameobject_factory.create_object("base");
	base1.set_initial_coordinates(0, 0);
	auto base2 = gameobject_factory.create_object("base");
	base2.set_initial_coordinates(10, 10);
	
	auto unit11 = gameobject_factory.create_object("melee_unit");
	unit11.set_initial_coordinates(8, 8);
	auto unit12 = gameobject_factory.create_object("melee_unit");
	unit12.set_initial_coordinates(11, 11);
	auto unit21 = gameobject_factory.create_object("melee_unit");
	unit21.set_initial_coordinates(2, 2);
	auto unit22 = gameobject_factory.create_object("melee_unit");
	unit22.set_initial_coordinates(-1, -1);
	
}

void Game::register_players()
{
	// TODO: fill players
}
