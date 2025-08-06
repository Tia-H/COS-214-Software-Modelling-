#include "Cavalry.h"
#include "Flanking.h"

Cavalry::Cavalry()
{
    strat.setStrategy(new Flanking());
}

void Cavalry::move()
{
    std::cout<<"Cavalry moves to battlefield"<<std::endl;
}

void Cavalry::attack()
{
    cout<<"Strategy: ";
    strat.executeStrategy();
    std::cout<<"Cavalry provides mobility and impacts flanking maeuvers"<<std::endl;
}