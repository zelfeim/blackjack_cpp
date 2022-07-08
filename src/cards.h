#ifndef CARDS_H_
#define CARDS_H_

#include <string>

enum class Color { Diamond, Club, Heart, Spade };
enum class Face  { Ace, Two, Three, Four, Five,
    Six, Seven, Eight, Nine, Ten, Jack, Queen, King };

class Card {
    const Color color_;
    const Face face_;
    const int value_;
    const std::string name_;

public:
    Card(const Color&, const Face&);

    int init_value(const Face&);
    std::string init_name(const Face&, const Color&);

    int value() const;
    std::string name() const;
};

#endif // CARDS_H_
