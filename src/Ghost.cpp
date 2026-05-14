#include "Ghost.h"

Ghost::Ghost() {
    x = 0;
    y = 0;
}

Ghost::Ghost(int startX, int startY) {
    x = startX;
    y = startY;
}

int Ghost::getX() const {
    return x;
}

int Ghost::getY() const {
    return y;
}

void Ghost::move() {
    // TODO: Implement later
}