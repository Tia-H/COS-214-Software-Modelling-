#include "SoldierFactory.h"

void SoldierFactory::setSoldiers(Soldiers* newSoldier)
{
    this->soldiers = newSoldier;
}

Soldiers* SoldierFactory::getSoldiers()
{
    return soldiers;
}

Soldiers* SoldierFactory::create()
{
    soldiers = createUnit();
    return soldiers;
}

