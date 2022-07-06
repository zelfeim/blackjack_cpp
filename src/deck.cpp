#include "deck.h"

#include <iostream>

// initializes the deck and all its cards
Deck::Deck(const int& number_of_decks) : cards_() {
    // creating arrays so that we can create
    // entire decks having every possible suit and color combination
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


    // loops that create 52 different cards x times,
    // x meaning number of used decks
    for(int i = 0; i < number_of_decks; ++i) {
        for(auto& color : colors) {
            for(auto& face : faces) {
                cards_.emplace_back(std::make_unique<Card>(color, face));
            }
        }
    }

    for(auto& it : cards_)
        std::cout << it->value() << '\n';
}

// shuffles the deck of cards
void Deck::shuffle_deck() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards_.begin(), cards_.end(), g);
}
