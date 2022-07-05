#ifndef CARDS_H_
#define CARDS_H_

enum class Color { Diamond, Club, Heart, Spade };
enum class Face  { Ace, Two, Three, Four, Five,
                   Six, Seven, Eight, Nine, Ten,
                   Jack, Queen, King };

class Card {
    const Color color_;
    const Face face_;
    int value_;

public:
    Card(const Color, const Face);
    int ret_card_value();

    int value() const;
};

#endif // CARDS_H_
