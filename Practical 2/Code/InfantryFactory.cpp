#include "InfantryFactory.h"

Soldiers* InfantryFactory::createUnit()
{
    //soldiers = new Infantry();
    //return soldiers;
    Soldiers* newUnit = new Infantry();
    setSoldiers(newUnit);
    
    return getSoldiers();
}

int InfantryFactory::calculateTotalHealthPerUnit()
{
    return getSoldiers()->getHealth() * getSoldiers()->getTotalSoldiers();
}

int InfantryFactory::calculateTotalDamagePerUnit()
{
    return getSoldiers()->getDamage() * getSoldiers()->getTotalSoldiers();
}

int InfantryFactory::calculateTotalDefencePerUnit()
{
    return getSoldiers()->getDamage() * getSoldiers()->getTotalSoldiers();
}