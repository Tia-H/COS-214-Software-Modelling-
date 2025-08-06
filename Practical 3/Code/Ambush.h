#ifndef AMBUSH_H
#define AMBUSH_H
#include "BattleStrategy.h"

class Ambush : public BattleStrategy
{
    void engage() const;
    public:
        ~Ambush(){};
};

#endif