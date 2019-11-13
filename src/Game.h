#pragma once

#include <vector>
#include <variant>
#include <SFML/Graphics/RenderWindow.hpp>

#include "level/Level.h"
#include "resources/TileSet.h"

typedef std::variant<int, std::monostate> GameStage;
const GameStage MENU = std::monostate();

class Game
{
    std::vector<Level> levels;
    sf::RenderWindow window;
    GameStage stage = MENU;
    TileSet tileSet;

public:
    void init();
    void loop();
    
private:
    void change_stage(const GameStage &stage);
    void draw_level();
};

std::string stage_name(const GameStage &stage);
