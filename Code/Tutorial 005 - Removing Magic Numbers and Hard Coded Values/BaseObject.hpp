#pragma once

#include <SFML/Graphics.hpp>

class BaseObject
{
public:
	BaseObject();
	~BaseObject();

	void Draw(sf::RenderWindow &window);
	sf::RectangleShape GetShape();

protected:
	sf::RectangleShape shape;

};

