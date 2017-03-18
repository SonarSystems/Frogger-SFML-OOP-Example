#include <SFML/Graphics.hpp>
#include "Frog.hpp"
#include "Truck.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Starter Template");
    
    Frog frog(window.getSize());
    
    Truck truck(window.getSize(), 0, window.getSize().y / 2);
    
    while (window.isOpen())
    {
        // handle events
        sf::Event event;
        
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::KeyReleased:
                    
                    frog.Move(event);
                    
                    break;
                    
                default:
                    break;
            }
        }
        
        // update
        truck.Move(window.getSize());
        
        if (frog.GetShape().getGlobalBounds().intersects(truck.GetShape().getGlobalBounds()))
        {
            window.close();
        }
        
        window.clear();
        
        // draw SFML content
        frog.Draw(window);
        truck.Draw(window);
        
        window.display();
    }
    
    return EXIT_SUCCESS;
}
