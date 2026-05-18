#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() {
    running = true;
}

void Game::start() {
    cout << "Pac-Man game started." << endl;
}

void Game::update() {
    running = false;
}

void Game::checkCollisions() {
    // TODO: Implement later
}

void Game::display() const {
    maze.display();
    cout << "Score: " << player.getScore() << endl;
    cout << "Lives: " << player.getLives() << endl;
}

void Game::movePlayer(char direction) {
    int newX = player.getX();
    int newY = player.getY();

    if (direction == 'w' || direction == 'W') {
        newY--;
    } else if (direction == 's' || direction == 'S') {
        newY++;
    } else if (direction == 'a' || direction == 'A') {
        newX--;
    } else if (direction == 'd' || direction == 'D') {
        newX++;
    } else {
        return;
    }

    if (!maze.isWall(newX, newY)) {
        player.move(direction);

        if (maze.hasDot(newX, newY)) {
            maze.removeDot(newX, newY);
            player.addScore(10);
        }
    }
}