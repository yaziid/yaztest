#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow app(sf::VideoMode(800, 600), "SFML window");

    float const m_speed = 0.5f;

    sf::RectangleShape rect;

    rect.setPosition(sf::Vector2f(0, 0));
    rect.setSize(sf::Vector2f(10, 10));
    rect.setFillColor(sf::Color::Red);

    while (app.isOpen())
    {
        sf::Event event;
        while (app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                app.close();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            rect.move(-m_speed, 0);
        }

        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            rect.move(m_speed, 0);
        }

        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            rect.move(0, -m_speed);
        }

        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            rect.move(0, m_speed);
        }

        app.clear();

        app.draw(rect);

        app.display();
    }

    return EXIT_SUCCESS;
}
