#include "SFML/Graphics.hpp"
#include "basic_movement.hpp"
#include <unistd.h>

int main()
{
    int x = 50;
    int y = 300;

    sf::RenderWindow window(sf::VideoMode(1350, 600), "SFML works!");
    sf::CircleShape shape(5,100);
    shape.setFillColor(sf::Color::Green);
    sf::RectangleShape wall(sf::Vector2f(200, 10));
    wall.setFillColor(sf::Color::Red);


    while (window.isOpen())
    {
        usleep(4000);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        move(&x,&y);
        window.clear();
        shape.setPosition(x,y);
        wall.setPosition(500,500);
        window.draw(shape);
        window.draw(wall);
        window.display();




    }

    return 0;
}
