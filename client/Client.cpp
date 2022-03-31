//
// Created by alex on 29.03.2022.
//

#include "Client.h"
#include "screens/connect/ConnectScreen.h"
#include <SFML/Window.hpp>


void Client::run()
{
	// TODO: move parameters to config
	sf::RenderWindow window(sf::VideoMode(800, 600), "My awesome game");
	
	setScreen(std::unique_ptr<BaseScreen>(new ConnectScreen(window)));
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			current_screen->process_event(event, window, *this);
		}
		
		window.clear(sf::Color::White);
		
		current_screen->draw(window);
		
		window.display();
	}
	
}

void Client::setScreen(std::unique_ptr<BaseScreen> new_screen)
{
	current_screen = std::move(new_screen);
}
