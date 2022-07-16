#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <memory>

#include "cards.h"

// actions which can be taken
enum class Actions { Hit, Stand, Double_down, Split, Surrender };

// Archetype of hand, which then is used by the dealer and the player classes.
class Hand {
private:
    std::vector<std::unique_ptr<Card>> held_cards_;
    int held_value_;
public:
    Hand();
    virtual ~Hand() = default;

    virtual int value() const;

    virtual void draw_card(std::unique_ptr<Card>);
    virtual std::vector<std::unique_ptr<Card>> clear_hand();

    virtual Actions action() = 0;
};

#endif // HAND_H_
