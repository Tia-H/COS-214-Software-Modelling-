#ifndef FLANKING_H
#define FLANKING_H
#include "BattleStrategy.h"

class Flanking : public BattleStrategy
{
    void engage() const;
    public:
        ~Flanking(){};
};

#endif