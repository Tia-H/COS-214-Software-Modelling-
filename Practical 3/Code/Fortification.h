#ifndef FORTIFICATION_H
#define FORTIFICATION_H
#include "BattleStrategy.h"

class Fortification : public BattleStrategy
{
    void engage() const;
    public:
        ~Fortification(){};
};

#endif