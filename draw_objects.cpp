#include "draw_objects.hpp"
void draw(sf :: RenderWindow &window, int x, int y){
    sf::CircleShape shape(5,100);
    shape.setFillColor(sf::Color::Green);
    sf::RectangleShape wall(sf::Vector2f(200, 10));
    wall.setFillColor(sf::Color::Red);
    shape.setPosition(x,y);
    wall.setPosition(500,500);
    window.draw(shape);
    window.draw(wall);
}
