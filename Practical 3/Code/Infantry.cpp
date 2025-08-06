#include "Infantry.h"

Infantry::Infantry()
{
    strat.setStrategy(new Ambush());
}

void Infantry::move()
{
    std::cout<<"Infantry moves to battlefield"<<std::endl;
}

void Infantry::attack()
{
    cout<<"Strategy: ";
    strat.executeStrategy();
    std::cout<<"Infanty engages in close combat and defends"<<std::endl;
}