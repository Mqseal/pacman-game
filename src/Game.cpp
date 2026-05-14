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
    cout << "Displaying game..." << endl;
}