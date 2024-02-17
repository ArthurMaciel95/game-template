#pragma once
#include <SFML/Graphics.hpp>

namespace ly
{
    class Player
    {
    public:
        Player();
        void update(float deltaTime);
        void render(sf::RenderWindow &window);
        void handleInput();
        void move(float x, float y);
        void setTexture(const sf::Texture &texture);
        void setPosition(float x, float y);

        sf::Vector2f getPosition() const;
        sf::FloatRect getGlobalBounds() const;

    private:
        sf::Sprite mSprite;
    };

}