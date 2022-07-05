#ifndef CARDS_H_
#define CARDS_H_

enum class Color { Diamond, Club, Heart, Spade };
enum class Face  {
    Ace = 11,
    Two = 2,
    Three = 3,
    Four = 4,
    Five = 5,
    Six = 6,
    Seven = 7,
    Eight = 8,
    Nine = 9,
    Ten = 10,
    Jack = 10,
    Queen = 10,
    King = 10
};

class Card {
    const Color color_;
    const Face face_;
    const int value_;

public:
    Card(const Color, const Face);

    int value() const;
};

#endif // CARDS_H_
