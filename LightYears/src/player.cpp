#include <SFML/Graphics.hpp>
#include "player.h"
namespace ly
{

    Player::Player()
    {
        mSprite = sf::Sprite();
    }

    Player::Player(const sf::Texture &texture)
    {
        mSprite = sf::Sprite(texture);
    }

    void Player::update(float deltaTime)
    {
        handleInput();
    }

    void Player::render(sf::RenderWindow &window)
    {
        window.draw(mSprite);
    }

    void Player::handleInput()
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            move(0, -1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            move(0, 1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            move(-1, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            move(1, 0);
        }
    }

    void Player::move(float x, float y)
    {
        mSprite.move(x, y);
    }

    void Player::setTexture(const sf::Texture &texture)
    {
        mSprite.setTexture(texture);
    }

    void Player::setPosition(float x, float y)
    {
        mSprite.setPosition(x, y);
    }

    void Player::setOrigin(float x, float y)
    {
        mSprite.setOrigin(x, y);
    }

    sf::Sprite Player::getSprite() const
    {
        return mSprite;
    }

    sf::Vector2f Player::getPosition() const
    {
        return mSprite.getPosition();
    }

    sf::FloatRect Player::getGlobalBounds() const
    {
        return mSprite.getGlobalBounds();
    }

}