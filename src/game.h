#ifndef GAME_H_
#define GAME_H_

#include <iostream>

#include "deck.h"

class Game {
    Deck deck_;
public:
    Game();

    void run();
};

#endif // GAME_H_
