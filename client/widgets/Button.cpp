//
// Created by alex on 30.03.2022.
//

#include "Button.h"
#include "../Settings.h"

Button::Button(const std::string& name, float x, float y)
{
	background.setSize(sf::Vector2f(name.size() * 15, 30));
	background.setPosition(x, y);
	
	background.setFillColor(sf::Color(0xDDDDDDFF));
	background.setOutlineColor(sf::Color::Black);
	background.setOutlineThickness(1);
	
	text.setPosition(x, y);
	text.setFillColor(sf::Color::Black);
	text.setCharacterSize(25);
	text.setFont(Settings::font);
	text.setString(name);
	is_clicked = false;
}

void Button::process_event(sf::Event& event, sf::Window& window)
{
	if (event.type == sf::Event::MouseButtonPressed)
	{
		is_clicked = background.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y);
	}
}

void Button::draw(sf::RenderWindow& window)
{
	window.draw(background);
	window.draw(text);
}
