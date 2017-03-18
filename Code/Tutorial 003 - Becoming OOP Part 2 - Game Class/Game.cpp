#include "Game.hpp"



Game::Game()
{
	window = new sf::RenderWindow(sf::VideoMode(640, 480), "SFML Starter Template");

	frog = new Frog(window->getSize());

	truck = new Truck(window->getSize(), 0, window->getSize().y / 2);
}


Game::~Game()
{
}

void Game::Loop()
{
	while (window->isOpen())
	{
		// handle events
		sf::Event event;

		while (window->pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::KeyReleased:

				frog->Move(event);

				break;

			default:
				break;
			}
		}

		// update
		truck->Move(window->getSize());

		if (frog->GetShape().getGlobalBounds().intersects(truck->GetShape().getGlobalBounds()))
		{
			window->close();
		}

		window->clear();

		// draw SFML content
		frog->Draw(*window);
		truck->Draw(*window);

		window->display();
	}
}
