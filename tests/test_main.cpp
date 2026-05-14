#include <iostream>
#include <cassert>
#include "../src/PacMan.h"

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

int main() {
    cout << "Running tests..." << endl;

    test_pacman_initialization();
    test_pacman_movement();
    test_score();

    cout << "All tests passed." << endl;

    return 0;
}