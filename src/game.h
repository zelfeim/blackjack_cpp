#ifndef GAME_H_
#define GAME_H_

#include <iostream>

#include "deck.h"
#include "player.h"
#include "dealer.h"

class Game {
    Deck deck_;

    Player player_;
    Dealer dealer_;

    unsigned int player_wins_;
    unsigned int dealer_wins_;
public:
    Game();

    void run();
    void handle_events();
};

#endif // GAME_H_
