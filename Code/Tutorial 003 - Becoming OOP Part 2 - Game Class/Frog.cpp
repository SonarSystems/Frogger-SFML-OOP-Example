#include "Frog.hpp"



Frog::Frog(sf::Vector2u size)
{
	frog.setSize(sf::Vector2f(80, 80));
	frog.setPosition(sf::Vector2f(frog.getPosition().x, size.y - frog.getSize().y));
}


Frog::~Frog()
{
}

void Frog::Draw(sf::RenderWindow &window)
{
	window.draw(frog);
}

void Frog::Move(sf::Event event)
{
	if (sf::Keyboard::Key::Left == event.key.code)
	{
        frog.move(-80, 0);
	}
	else if (sf::Keyboard::Key::Right == event.key.code)
	{
        frog.move(80, 0);
	}
	else if (sf::Keyboard::Key::Up == event.key.code)
	{
        frog.move(0, -80);
	}
	else if (sf::Keyboard::Key::Down == event.key.code)
	{
        frog.move(0, 80);
	}
}

sf::RectangleShape Frog::GetShape()
{
	return frog;
}
