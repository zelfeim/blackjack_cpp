#include "cards.h"

Card::Card(const Color color, const Face face) : color_(color),
                                                 face_(face),
                                                 value_(ret_card_value()) {}

// sets approporiate value of card by checking its face
int Card::ret_card_value() {
    switch(face_) {
        case(Face::Ace):
            return 11;
        case(Face::Two):
            return 2;
        case(Face::Three):
            return 3;
        case(Face::Four):
            return 4;
        case(Face::Five):
            return 5;
        case(Face::Six):
            return 6;
        case(Face::Seven):
            return 7;
        case(Face::Eight):
            return 8;
        case(Face::Nine):
            return 9;
        case(Face::Ten):
            return 10;
        case(Face::Jack):
            return 10;
        case(Face::Queen):
            return 10;
        case(Face::King):
            return 10;
        default:
            return 0;
    }
}

int Card::value() const {
    return value_;
}
