#include "TacticalPlanner.h"
#include "TacticalMemento.h"

TacticalMemento* TacticalPlanner::createMemento(int h,int d, int a)
{
    return new TacticalMemento(h,d,a,currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento mem)
{
    currentStrategy = mem.getCurrentStrategy();
}

void TacticalPlanner::setStrat(BattleStrategy* newStrat)
{
    if (newStrat==NULL)
    {
        return;
    }
    if (currentStrategy!=NULL)
    {
        //delete currentStrategy;
        //currentStrategy==NULL;
    }
    currentStrategy = newStrat;
}

BattleStrategy* TacticalPlanner::getCurrentStrategy()
{
    return currentStrategy;
}

TacticalPlanner::~TacticalPlanner()
{
    if (currentStrategy!=NULL)
    {
        currentStrategy=NULL;
    }
}