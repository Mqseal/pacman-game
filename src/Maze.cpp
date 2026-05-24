#include "Maze.h"
#include <iostream>

using namespace std;

Maze::Maze() {
    loadMaze();
}

void Maze::loadMaze() {
    grid = {
        "####################################",
        "#..................................#",
        "#...#####..............#####.......#",
        "#..................................#",
        "#......####......####..............#",
        "#..................................#",
        "#............G...G...G.............#",
        "#...............###................#",
        "#..................................#",
        "#...............P..................#",
        "#..................................#",
        "#......####......####..............#",
        "#..................................#",
        "#...#####..............#####.......#",
        "#..................................#",
        "####################################"
    };
}

void Maze::display() const {
    for (const string& row : grid) {
        cout << row << endl;
    }
}

bool Maze::isWall(int x, int y) const {
    return grid[y][x] == '#';
}

bool Maze::hasDot(int x, int y) const {
    return grid[y][x] == '.';
}

void Maze::removeDot(int x, int y) {
    if (hasDot(x, y)) {
        grid[y][x] = ' ';
    }
}

char Maze::getCell(int x, int y) const {
    return grid[y][x];
}

void Maze::setCell(int x, int y, char value) {
    grid[y][x] = value;
}