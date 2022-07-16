#ifndef DEALER_H_
#define DEALER_H_

#include "hand.h"

class Dealer : public Hand {
public:
    Actions action() override;

};

#endif // DEALER_H_
