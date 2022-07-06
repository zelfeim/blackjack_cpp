#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <array>
#include <random>
#include <algorithm>
#include <memory>

#include "cards.h"

class Deck {
    std::vector<std::unique_ptr<Card>> cards_;
public:
    Deck(const int&);

    void shuffle_deck();
};

#endif // DECK_H_
