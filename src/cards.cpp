#include "cards.h"

Card::Card(const Color& color, const Face& face) : color_(color),
                                                   face_(face),
                                                   value_(init_value(face)),
                                                   name_(init_name(color, face)) {}

// returns the correct value of face for constructors member initalization
int Card::init_value(const Face& face) {
    switch(face) {
        case(Face::Ace):
            return 11;
            break;
        case(Face::Two):
            return 2;
            break;
        case(Face::Three):
            return 3;
            break;
        case(Face::Four):
            return 4;
            break;
        case(Face::Five):
            return 5;
            break;
        case(Face::Six):
            return 6;
            break;
        case(Face::Seven):
            return 7;
            break;
        case(Face::Eight):
            return 8;
            break;
        case(Face::Nine):
            return 9;
            break;
        case(Face::Ten):
            return 10;
            break;
        case(Face::Jack):
            return 10;
            break;
        case(Face::Queen):
            return 10;
            break;
        case(Face::King):
            return 10;
            break;
    }

    return -1;
}

// returns string which is the displayed name of such card,
// depending on its face and color
std::string Card::init_name(const Color& color, const Face& face) {
    std::string temp {""};

    // appends the face name
    switch(face) {
        case(Face::Ace):
            temp += "Ace";
            break;
        case(Face::Two):
            temp += "Two";
            break;
        case(Face::Three):
            temp += "Three";
            break;
        case(Face::Four):
            temp += "Four";
            break;
        case(Face::Five):
            temp += "Five";
            break;
        case(Face::Six):
            temp += "Six";
            break;
        case(Face::Seven):
            temp += "Seven";
            break;
        case(Face::Eight):
            temp += "Eight";
            break;
        case(Face::Nine):
            temp += "Nine";
            break;
        case(Face::Ten):
            temp += "Ten";
            break;
        case(Face::Jack):
            temp += "Jack";
            break;
        case(Face::Queen):
            temp += "Queen";
            break;
        case(Face::King):
            temp += "King";
            break;
    }

    temp += " of ";

    // appends color name
    switch(color) {
        case(Color::Diamond):
            temp += "Diamonds";
            break;
        case(Color::Club):
            temp += "Clubs";
            break;
        case(Color::Heart):
            temp += "Hearts";
            break;
        case(Color::Spade):
            temp += "Spades";
            break;
    }

    return temp;
}

// returning value
int Card::value() const {
    return value_;
}

// returning name
std::string Card::name() const {
    return name_;
}
