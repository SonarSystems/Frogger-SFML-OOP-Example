#include "Frog.hpp"

Frog::Frog(sf::Vector2u size)
{
	shape.setSize(sf::Vector2f(FROG_SIZE_WIDTH, FROG_SIZE_HEIGHT));
	shape.setPosition(sf::Vector2f(shape.getPosition().x, size.y - shape.getSize().y));
}


Frog::~Frog()
{
}

void Frog::Move(sf::Event event)
{
	if (sf::Keyboard::Key::Left == event.key.code)
	{
        shape.move(-FROG_MOVEMENT_AMOUNT, 0);
	}
	else if (sf::Keyboard::Key::Right == event.key.code)
	{
        shape.move(FROG_MOVEMENT_AMOUNT, 0);
	}
	else if (sf::Keyboard::Key::Up == event.key.code)
	{
        shape.move(0, -FROG_MOVEMENT_AMOUNT);
	}
	else if (sf::Keyboard::Key::Down == event.key.code)
	{
        shape.move(0, FROG_MOVEMENT_AMOUNT);
	}
}
