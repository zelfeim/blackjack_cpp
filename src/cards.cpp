#include "cards.h"

Card::Card(const Color color, const Face face) : color_(color),
                                                 face_(face),
                                                 value_(static_cast<int>(face)) {}

int Card::value() const {
    return value_;
}
