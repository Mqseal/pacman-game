#include <iostream>
#include "Game.h"

using namespace std;

int main() {
    Game game;

    game.start();

    while (true) {
        game.update();
        game.display();
    }

    return 0;
}