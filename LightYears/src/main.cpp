#include <iostream>
#include <SFML/Graphics.hpp>
#include "framework/app.h"

int main()
{
    std::unique_ptr<ly::Application> app = std::make_unique<ly::Application>();
    app->run();
}
