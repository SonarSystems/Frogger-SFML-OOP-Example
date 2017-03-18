#pragma once

#include <SFML/Graphics.hpp>

class Frog
{
public:
	Frog(sf::Vector2u size);
	~Frog();

	void Draw(sf::RenderWindow &window);
	void Move(sf::Event event);

	sf::RectangleShape GetShape();

private:
	sf::RectangleShape frog;

};

