#include "PacMan.h"

PacMan::PacMan() {
    x = 16;
    y = 9;
    lives = 3;
    score = 0;
}

PacMan::PacMan(int startX, int startY) {
    x = startX;
    y = startY;
    lives = 3;
    score = 0;
}

int PacMan::getX() const {
    return x;
}

int PacMan::getY() const {
    return y;
}

int PacMan::getLives() const {
    return lives;
}

int PacMan::getScore() const {
    return score;
}

void PacMan::move(char direction) {
    if (direction == 'w' || direction == 'W') {
        y--;
    } else if (direction == 's' || direction == 'S') {
        y++;
    } else if (direction == 'a' || direction == 'A') {
        x--;
    } else if (direction == 'd' || direction == 'D') {
        x++;
    }
}

void PacMan::loseLife() {
    if (lives > 0) {
        lives--;
    }
}

void PacMan::addScore(int points) {
    score += points;
}