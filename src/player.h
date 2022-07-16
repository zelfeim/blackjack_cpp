#ifndef PLAYER_H_
#define PLAYER_H_

#include "hand.h"

class Player : public Hand {
public:
    Actions action() override;
};

#endif // PLAYER_H_
