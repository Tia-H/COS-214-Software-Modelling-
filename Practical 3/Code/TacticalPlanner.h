#ifndef TACTICAL_PLANNER_H
#define TACTICAL_PLANNER_H

#include <iostream>
#include <string>
using namespace std;

#include "Artillery.h"
#include "BattleStrategy.h"
#include "TacticalMemento.h"

class TacticalPlanner
{
    private:
        BattleStrategy* currentStrategy;
    public:
        TacticalMemento* createMemento(int,int,int);
        void restoreMemento(TacticalMemento mem);
        void setStrat(BattleStrategy* newStrat);
        BattleStrategy* getCurrentStrategy();
        ~TacticalPlanner();
};
#endif