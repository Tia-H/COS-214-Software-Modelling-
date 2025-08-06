#ifndef ARTILLERY_H
#define ARTILLERY_H

#include <iostream>
#include <string>
using namespace std;

#include "LegionUnit.h"
#include "UnitComponent.h"
#include "BattleStrategy.h"
#include "TacticalCommand.h"
#include "Fortification.h"

class Artillery: public LegionUnit, public UnitComponent
{
    private:
        int defense; 
        int damage;
        int health;
        string name;
        TacticalCommand strat;
    public:
        Artillery();
        virtual void move();
        virtual void attack();
};

#endif