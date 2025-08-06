#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include <string>
using namespace std;

#include "LegionUnit.h"
#include "UnitComponent.h"
#include "BattleStrategy.h"
#include "TacticalCommand.h"
#include "Ambush.h"

class Infantry: public LegionUnit, public UnitComponent
{
    private:
        int defense;
        int damage;
        int health;
        string name;
        TacticalCommand strat;
    public:
        Infantry();
        virtual void move();
        virtual void attack();
};

#endif