#pragma once

#include <SFML/Graphics.hpp>
#include "Frog.hpp"
#include "Truck.hpp"

class Game
{
public:
	Game();
	~Game();

	void Loop();

private:
	sf::RenderWindow *window;
	Frog *frog;
	Truck *truck;

};

