#include "BoatmanFactory.h"
#include "Boatman.h"

Soldiers* BoatmanFactory::createUnit()
{
    //soldiers = new Boatman();
    //return soldiers;
    Soldiers* newUnit = new Boatman();
    setSoldiers(newUnit);
    return getSoldiers();
}

int BoatmanFactory::calculateTotalHealthPerUnit()
{
    return getSoldiers()->getHealth() * getSoldiers()->getTotalSoldiers();
}

int BoatmanFactory::calculateTotalDamagePerUnit()
{
    return getSoldiers()->getDamage() * getSoldiers()->getTotalSoldiers();
}

int BoatmanFactory::calculateTotalDefencePerUnit()
{
    return getSoldiers()->getDefence() * getSoldiers()->getTotalSoldiers();
}