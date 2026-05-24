#include <iostream>
#include <cassert>
#include "../src/PacMan.h"
#include "../src/Ghost.h"
#include "../src/Maze.h"

using namespace std;

void test_pacman_initialization() {
    PacMan p(5, 7);

    assert(p.getX() == 5);
    assert(p.getY() == 7);
    assert(p.getLives() == 3);
    assert(p.getScore() == 0);

    cout << "test_pacman_initialization passed" << endl;
}

void test_pacman_movement() {
    PacMan p(5, 5);

    p.move('w');
    assert(p.getY() == 4);

    p.move('s');
    assert(p.getY() == 5);

    p.move('a');
    assert(p.getX() == 4);

    p.move('d');
    assert(p.getX() == 5);

    cout << "test_pacman_movement passed" << endl;
}

void test_score() {
    PacMan p;

    p.addScore(10);
    assert(p.getScore() == 10);

    p.addScore(20);
    assert(p.getScore() == 30);

    cout << "test_score passed" << endl;
}

void test_dot_collection() {
    Maze maze;

    assert(maze.hasDot(1, 1));

    maze.removeDot(1, 1);

    assert(!maze.hasDot(1, 1));

    cout << "test_dot_collection passed" << endl;
}

void test_empty_space() {
    Maze maze;

    assert(!maze.hasDot(0, 0));

    cout << "test_empty_space passed" << endl;
}

void test_wall_collision() {
    Maze maze;

    assert(maze.isWall(0, 0));

    cout << "test_wall_collision passed" << endl;
}

void test_ghost_initialization() {
    Ghost ghost(5, 2);

    assert(ghost.getX() == 5);
    assert(ghost.getY() == 2);

    cout << "test_ghost_initialization passed" << endl;
}

int main() {
    cout << "Running tests..." << endl;

    test_pacman_initialization();
    test_pacman_movement();
    test_score();
    test_dot_collection();
    test_empty_space();
    test_wall_collision();
    test_ghost_initialization();

    cout << "All tests passed." << endl;

    return 0;
}