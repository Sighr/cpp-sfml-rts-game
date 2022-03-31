//
// Created by alex on 30.03.2022.
//

#include "GameScreen.h"

GameScreen::GameScreen(Connection&& connection)
	:
	connection(std::move(connection))
{

}

BaseScreen::Status GameScreen::process_event(sf::Event& event, sf::Window& window, Client& client)
{
	return Success;
}

BaseScreen::Status GameScreen::draw(sf::RenderWindow& window)
{
	
	return Success;
}
