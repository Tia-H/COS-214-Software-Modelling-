#include "TacticalMemento.h"

TacticalMemento::TacticalMemento(int hl,int d, int t,BattleStrategy* strategy)
{
    currentStrategy = strategy;
    healthLost = hl;
    damageDealt = d;
    totalSoldiersAlive = t;
    //this->name=name;
    //storeStrategy(strategy);
}

void TacticalMemento::storeStrategy(BattleStrategy* strategy)
{
    currentStrategy = strategy;
}

BattleStrategy* TacticalMemento::getCurrentStrategy()
{
    return currentStrategy;
}

int TacticalMemento::getHealthLost()
{
    return healthLost;
}

int TacticalMemento::getDamageDealt()
{
    return damageDealt;
}

int TacticalMemento::getAlive()
{
    return totalSoldiersAlive;
}