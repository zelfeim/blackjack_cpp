#include "hand.h"

#include <iostream>

Hand::Hand() : held_cards_(), held_value_(0) {}

// returning the held value
int Hand::value() const {
    return held_value_;
}

// adds the drawn cards to the hand, add its value to total held value
void Hand::draw_card(std::unique_ptr<Card> card) {
    held_value_ += card->value();
    held_cards_.emplace_back(std::move(card));
}

// clears the hand by moving all elements that are held to another vector
std::vector<std::unique_ptr<Card>> Hand::clear_hand() {
    std::vector<std::unique_ptr<Card>> cards = std::move(held_cards_);
    held_cards_.clear();

    held_value_ = 0;

    return cards;
}
