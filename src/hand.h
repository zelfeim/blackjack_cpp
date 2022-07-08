#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <memory>

#include "cards.h"

// Archetype of hand, which then is used by the dealer and the player classes.
class Hand {
private:
    std::vector<std::unique_ptr<Card>> held_cards_;
    int held_value_;
public:
    virtual ~Hand() = default;

    virtual int value() const;

    virtual void draw_card(std::unique_ptr<Card>);
    virtual std::vector<std::unique_ptr<Card>> clear_hand();
};

#endif // HAND_H_
