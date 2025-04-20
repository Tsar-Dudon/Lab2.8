#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({820, 800}), "Churki stuchatsya v okna!");
    window.setFramerateLimit(24);

    sf::CircleShape circle(150.f);
    circle.setOrigin(sf::Vector2f(100.f, 100.f));
    circle.setFillColor(sf::Color(0,0,0));
    circle.setOutlineThickness(10.f);
    circle.setOutlineColor(sf::Color(100, 100,250));
    circle.setPosition({400, 400});

    sf::CircleShape triangle(100.f, 3);
    triangle.setOrigin(sf::Vector2f(100.f, 100.f));
    triangle.setFillColor(sf::Color(250,100,100));
    triangle.setPosition({400, 300});
    triangle.rotate(sf::degrees(45.f));

    sf::CircleShape octagon(80.f, 8);
    octagon.setOrigin(sf::Vector2f(60.f, 10.f));
    octagon.setFillColor(sf::Color(100,250,100));
    octagon.setPosition({300, 400});
    octagon.rotate(sf::degrees(21.f));

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
 
        window.clear();
        window.draw(circle);
        window.draw(triangle);
        window.draw(octagon);
        window.display();
    }
}