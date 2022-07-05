#ifndef HAND_H_
#define HAND_H_

#include <vector>

#include "cards.h"

class Hand {
private:
    std::vector<Card> held_cards_;
    int held_value_;
public:
    ~Hand() = default;
};

#endif // HAND_H_
