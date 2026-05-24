#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() {
    running = true;
    ghosts.push_back(Ghost(5, 2));
}

void Game::start() {
    cout << "Pac-Man game started." << endl;
}

void Game::update() {
    for (int i = 0; i < ghosts.size(); i++) {
        ghosts[i].moveRandom(maze);
    }

    checkCollisions();
}

void Game::checkCollisions() {
    for (int i = 0; i < ghosts.size(); i++) {
        if (ghosts[i].getX() == player.getX() &&
            ghosts[i].getY() == player.getY()) {
            player.loseLife();
            running = false;
        }
    }
}

bool Game::isGameOver() const {
    return !running;
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