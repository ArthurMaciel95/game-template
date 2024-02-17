#include "framework/app.h"
#include <iostream>
namespace ly
{

    Application::Application() : mWindow(sf::VideoMode(800, 600), "LightYears"), mTargetFrameTime(30.0f), mClock{}
    {
    }

    void Application::run()
    {

        mClock.restart();
        float acumulatedTime = 0.0f;
        float targetDeltaTime = 1.0f / mTargetFrameTime;
        while (mWindow.isOpen())
        {
            sf::Event event;
            while (mWindow.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    mWindow.close();
            }
            acumulatedTime += mClock.restart().asSeconds();

            while (acumulatedTime >= targetDeltaTime)
            {
                acumulatedTime -= targetDeltaTime;
                Tick(targetDeltaTime);
                RenderInternal();
                // Update
            }
        }
    }

    void Application::Tick(float deltaTime)
    {
        std::cout << "ticking at framerate: " << deltaTime << std::endl;
    }

    void Application::Render()
    {

        sf::RectangleShape rect(sf::Vector2f(50, 50));
        rect.setFillColor(sf::Color::Green);
        rect.setPosition(mWindow.getSize().x / 2, mWindow.getSize().y / 2);
        rect.setOrigin(rect.getSize().x / 2, rect.getSize().y / 2);
        mWindow.draw(rect);
    }

    void Application::RenderInternal()
    {
        mWindow.clear();
        Render();
        mWindow.display();
    }

}
