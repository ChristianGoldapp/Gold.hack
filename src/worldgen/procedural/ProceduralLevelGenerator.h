#pragma once

#include "../LevelGenerator.h"

class ProceduralLevelGenerator : public LevelGenerator {
    std::string currentWall;

    std::string currentFloor;
    LevelTile maze[MAZE_X_SIZE][MAZE_Y_SIZE];
public:

    ProceduralLevelGenerator();

    void generate(ProceduralLevelSpec spec);

    void plotRoom(int x, int y, int width, int height);

    void dfsGenerate(sf::Vector2i cell, std::vector<sf::Vector2i> &visited);

    void dfsGenerate();

    void debugOutput(int x, int y);

    void expandMaze();

    void createRooms();

    void createRoom(std::random_device &rand);
};

std::vector<Direction> neighborsRandomOrder(sf::Vector2i cell, int x_max, int y_max);