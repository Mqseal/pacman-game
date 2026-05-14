#include "Maze.h"
#include <iostream>

using namespace std;

Maze::Maze() {
    loadMaze();
}

void Maze::loadMaze() {
    grid = {
        "##########",
        "#........#",
        "#...P....#",
        "#........#",
        "##########"
    };
}

void Maze::display() const {
    for (const string& row : grid) {
        cout << row << endl;
    }
}

bool Maze::isWall(int x, int y) const {
    return false;
}

bool Maze::hasDot(int x, int y) const {
    return true;
}

void Maze::removeDot(int x, int y) {
    // TODO: Implement later
}