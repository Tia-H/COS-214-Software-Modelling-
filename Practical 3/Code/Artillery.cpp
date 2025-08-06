#include "Artillery.h"

Artillery::Artillery()
{
    strat.setStrategy(new Fortification());
}

void Artillery::move()
{
    std::cout<<"Artillery moves to battlefield"<<std::endl;
}

void Artillery::attack()
{
    cout<<"Strategy: ";
    strat.executeStrategy();
    std::cout<<"Artillery shoots arrows from a distance"<<std::endl;
}

