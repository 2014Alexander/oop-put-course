//
// Created by PC on 07.01.2023.
//

#ifndef PO_LESSON9_GAME_H
#define PO_LESSON9_GAME_H


#include "API.h"

class Game {
private:
    API *api;
public:
    Game(API *api);

    int result();
};

int Game::result() {
    return api->result();
}

Game::Game(API *api) : api(api) {}


#endif //PO_LESSON9_GAME_H
