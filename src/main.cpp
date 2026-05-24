#include <iostream>
#include "Game.h"

using namespace std;

int main() {
    Game game;
    game.start();

    char move;

    while (!game.isGameOver()) {
        game.display();

        cout << "Move (W/A/S/D, Q to quit): ";
        cin >> move;

        if (move == 'q' || move == 'Q') {
            break;
        }

        game.movePlayer(move);
        game.update();
    }

    cout << "Game over!" << endl;

    return 0;
}