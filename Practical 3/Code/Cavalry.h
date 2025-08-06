#ifndef CAVALRY_H
#define CAVALRY_H

#include <iostream>
#include <string>
using namespace std;

#include "LegionUnit.h"
#include "UnitComponent.h"
#include "BattleStrategy.h"
#include "TacticalCommand.h"

class Calvalry;

class Cavalry: public LegionUnit, public UnitComponent
{
    private:
        int defense;
        int damage;
        int health;
        string name;
        TacticalCommand strat;
    public:
        Cavalry();
        void move();
        virtual void attack();
};

#endif