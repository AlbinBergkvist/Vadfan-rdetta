#include "basic_movement.hpp"
#include <iostream>
void move(int *x, int *y){
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        *x = *x + 1;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        *x = *x - 1;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        *y = *y - 1;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        *y = *y + 1;
    }
}
