#include "Game.h"
#include <SFML/Window.hpp>
#include <sstream>

void Game::init()
{
    window.create(sf::VideoMode(800, 600), "Gold.hack");
    stage = 0;
}

void Game::loop()
{
    change_stage(0);
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
}

void Game::change_stage(GameStage gs){
    window.setTitle(stage_name(gs));
}

std::string stage_name(GameStage stage)
{
    if (stage == MENU)
    {
        return std::string("Gold.hack: Menu");
    }
    else
    {
        std::ostringstream ss;
        ss << "Gold.hack: Level ";
        ss << std::get<int>(stage);
        return ss.str();
    }
}