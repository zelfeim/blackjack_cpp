#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <array>
#include <random>
#include <algorithm>

#include "cards.h"

class Deck {
    std::vector<Card> cards_;
public:
    Deck(const int&);

    void shuffle_deck();
};

#endif // DECK_H_
