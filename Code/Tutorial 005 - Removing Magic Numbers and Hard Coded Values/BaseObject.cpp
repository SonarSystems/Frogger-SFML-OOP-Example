#include "BaseObject.hpp"



BaseObject::BaseObject()
{
}


BaseObject::~BaseObject()
{
}

void BaseObject::Draw(sf::RenderWindow &window)
{
	window.draw(shape);
}

sf::RectangleShape BaseObject::GetShape()
{
	return shape;
}