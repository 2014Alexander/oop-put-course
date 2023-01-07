#include <iostream>
#include "Game.h"
#include "FakeAPI.h"

using namespace std;

int main() {
    Game game = Game(new FakeAPI());
    cout << "Game result is " << game.result() << "!" << endl;
    if (game.result() != 777) {
        cout << "Bad result :(" << endl;
    }
    return 0;
}
