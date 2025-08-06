#include "ShieldBearerFactory.h"
#include "SoldierFactory.h"

Soldiers* ShieldBearerFactory::createUnit()
{
    //soldiers = new ShieldBearer();
    //return soldiers;
    //return new ShieldBearer();
    Soldiers* newUnit = new ShieldBearer();
    setSoldiers(newUnit);
    return getSoldiers();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit()
{
    return getSoldiers()->getHealth() * getSoldiers()->getTotalSoldiers();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit()
{
    return getSoldiers()->getDamage() * getSoldiers()->getTotalSoldiers();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit()
{
    return getSoldiers()->getDamage() * getSoldiers()->getTotalSoldiers();
}