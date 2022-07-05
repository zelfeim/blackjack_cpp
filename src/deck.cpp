#include "deck.h"

#include <iostream>

// initializes the deck and all its cards
Deck::Deck() : cards_() {
    std::array<Color, 4> colors {Color::Club,
                                 Color::Diamond,
                                 Color::Heart,
                                 Color::Spade};

    std::array<Face, 13> faces {Face::Ace, Face::Two,
                                Face::Three, Face::Four,
                                Face::Five, Face::Six,
                                Face::Seven, Face::Eight,
                                Face::Nine, Face::Ten,
                                Face::Jack, Face::Queen,
                                Face::King};


    for(auto& color : colors) {
        for(auto& face : faces) {
            cards_.emplace_back(Card(color, face));
        }
    }
}
