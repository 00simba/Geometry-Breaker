#include <SFML/Graphics.hpp>
#include <unistd.h>
#include "square.h"

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1280u, 720u}), "CMake SFML Project");
    window.setFramerateLimit(144);

    sf::RectangleShape square({80.f, 80.f});
    square.setFillColor(sf::Color(100, 250, 50));

    sf::CircleShape circle({25.f});
    circle.setFillColor(sf::Color(100, 100, 255));
    circle.move({550.f, 360.f});

    float circlex = -5.0f;
    float circley = -5.0f;
    unsigned int microsecond = 1000000;

    while (window.isOpen())
    {

        while (const std::optional event = window.pollEvent()){
            if (event->is<sf::Event::Closed>()){
                window.close();
            }
        }

        window.clear(sf::Color(50, 50, 50));
        window.draw(square);
        window.draw(circle);

        for(int i = 0; i < squaresLength; i++){
            sf::RectangleShape square({squares[i].x, squares[i].y});
            square.setFillColor(sf::Color::Red);
            square.setPosition({squares[i].posx, squares[i].posy});
            window.draw(square);
        }


        window.display();
        circle.move({circlex, circley});

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)){
            if(square.getPosition().y < 640){
                square.move({0.0f, 10.0f});
            }  
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)){
            if(square.getPosition().y > 0){
                  square.move({0.0f, -10.0f});
            } 
        }

        // Check if circle collides with square
        if(square.getGlobalBounds().findIntersection(circle.getGlobalBounds())){
            circlex = -circlex;
            circley = -circley;
            circle.move({circlex, circley});

        }

        // Circle bounds checking
        if(circle.getPosition().y > 670.0f || circle.getPosition().y < 0){
            circley = -circley;
            circle.move({circlex, circley});
        }

        if(circle.getPosition().x > 1240){
            circlex = -circlex;
            circle.move({circlex, circley});
        }

        if(circle.getPosition().x < 0){
            circlex = -5.0f;
            circley = -5.0f;
            circle.setPosition({360.f, 360.f});
            usleep(1 * microsecond);
        }

    }
}
