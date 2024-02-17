#pragma once
#include <SFML/Graphics.hpp>

namespace ly
{
    class Application
    {
    public:
        Application();
        void run();

    private:
        void Tick(float deltaTime);
        void RenderInternal();
        void Render();
        sf::RenderWindow mWindow;
        float mTargetFrameTime = 1.0f / 60.0f;
        sf::Clock mClock;
    };
}