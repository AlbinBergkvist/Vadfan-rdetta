#include "SFML/Graphics.hpp"
#include "basic_movement.hpp"
#include "draw_objects.hpp"
#include <unistd.h>

int main()
{
    int x = 50;
    int y = 300;

    sf::RenderWindow window(sf::VideoMode(1350, 600), "SFML works!");


    while (window.isOpen())
    {
        usleep(4000);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        draw(window, x, y);
        move(&x,&y);

        window.display();




    }

    return 0;
}
