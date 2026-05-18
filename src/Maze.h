#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include <string>

class Maze {
private:
    std::vector<std::string> grid;

public:
    Maze();

    void loadMaze();
    void display() const;

    bool isWall(int x, int y) const;
    bool hasDot(int x, int y) const;
    void removeDot(int x, int y);
    char getCell(int x, int y) const;
    void setCell(int x, int y, char value);
};

#endif