#pragma once

#include <string>
#include <queue>
#include "../resources/Resources.h"
#include "Item.h"

class Game;

class Inventory {
    std::vector<Item> items;
    int selected_item;
    int message_limit = 5;
    int score = 0;
    int energy = 100;
public:
    int getScore() const;

    bool useEnergy(int e);

    void recharge();

    Inventory(std::string name);

    std::string name;

    void draw(sf::RenderTarget &target, Resources &resources, Game *game);

    int currentAttack();

    Item &currentItem();

    void scrollLeft();

    void scrollRight();

    void enterMessage(std::string message);

    sf::Text textbox(sf::RenderTarget &target, Resources &resources, std::string msg, sf::Vector2f pos, int char_size);

    std::vector<std::string> messages;

    int addScore(int points);
};
