#pragma once

#include <SFML/Graphics.hpp>
#include "BaseObject.hpp"
#include "DEFINITIONS.hpp"

class Frog : public BaseObject
{
public:
	Frog(sf::Vector2u size);
	~Frog();

	void Move(sf::Event event);

private:

};

