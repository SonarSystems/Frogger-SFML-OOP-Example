#include "Truck.hpp"



Truck::Truck(sf::Vector2u size, float posX, float posY)
{
	truck.setSize(sf::Vector2f(120, 60));
	truck.setFillColor(sf::Color::Red);
	truck.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}


Truck::~Truck()
{
}

void Truck::Draw(sf::RenderWindow &window)
{
	window.draw(truck);
}

void Truck::Move(sf::Vector2u size)
{
	truck.move(0.2, 0);

	if (truck.getPosition().x > size.x)
	{
		truck.setPosition(sf::Vector2f(0 - truck.getSize().x, originalPosY));
	}
}

sf::RectangleShape Truck::GetShape()
{
	return truck;
}
