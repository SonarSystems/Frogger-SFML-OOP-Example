#pragma once

#include <SFML/Graphics.hpp>
#include "BaseObject.hpp"
#include "DEFINITIONS.hpp"

class Truck : public BaseObject
{
public:
	Truck(sf::Vector2u size, float posX, float posY);
	~Truck();

	void Move(sf::Vector2u size);

private:
	float originalPosX, originalPosY;


};

