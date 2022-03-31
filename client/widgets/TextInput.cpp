//
// Created by alex on 30.03.2022.
//

#include "TextInput.h"
#include "../Settings.h"

TextInput::TextInput(float x, float y, float width)
{
	placeholder.setSize(sf::Vector2f(width, 30));
	placeholder.setPosition(x, y);
	
	placeholder.setOutlineColor(sf::Color::Black);
	placeholder.setOutlineThickness(1);
	
	text.setPosition(x, y);
	text.setFillColor(sf::Color::Black);
	text.setCharacterSize(25);
	text.setFont(Settings::font);
}

void TextInput::process_event(sf::Event& event, sf::Window& window)
{
	if (event.type == sf::Event::MouseButtonPressed
		&& event.mouseButton.button == sf::Mouse::Left)
	{
		// getGlobalBounds return rect in world coordinates, while event.mouseButton use window coordinates
		// it's ok for default view, but can be problem in future
		// solution - adjust click coords using renderwindow.mappixeltocoords
		focused = placeholder.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y);
		if (focused)
		{
			placeholder.setOutlineThickness(2);
		}
		else
		{
			placeholder.setOutlineThickness(1);
		}
	}
	else if (focused && event.type == sf::Event::TextEntered)
	{
		const auto character = event.text.unicode;
		// ascii for backspace
		if (character == 8)
		{
			string.clear();
		}
		else
		{
			string += character;
		}
		text.setString(string);
	}
}

void TextInput::draw(sf::RenderWindow& window)
{
	window.draw(placeholder);
	window.draw(text);
}
