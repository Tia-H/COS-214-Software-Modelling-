#ifndef TACTICAL_MEMENTO_H
#define TACTICAL_MEMENTO_H

#include <iostream>
#include <string>
using namespace std;
#include "BattleStrategy.h"

class TacticalPlanner;

class TacticalMemento
{
    private:
        //string name;
        int healthLost;
        int damageDealt;
        int totalSoldiersAlive;
        BattleStrategy* currentStrategy;
        TacticalMemento(int hl,int d, int t,BattleStrategy* strategy);
        void storeStrategy(BattleStrategy* strategy);

        friend class TacticalPlanner;
    public:
        BattleStrategy* getCurrentStrategy();
        int getHealthLost();
        int getDamageDealt();
        int getAlive();
};
#endif