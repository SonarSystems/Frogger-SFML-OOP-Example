#include "Truck.hpp"



Truck::Truck(sf::Vector2u size, float posX, float posY)
{
	shape.setSize(sf::Vector2f(120, 60));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}


Truck::~Truck()
{
}


void Truck::Move(sf::Vector2u size)
{
	shape.move(TRUCK_MOVEMENT_SPEED, 0);

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(0 - shape.getSize().x, originalPosY));
	}
}

