#ifndef SHILEDBEARER_FACTORY_H
#define SHIELDBEARER_FACTORY_H

#include "SoldierFactory.h"
#include "ShieldBearer.h"
using namespace std;

class ShieldBearerFactory: public SoldierFactory
{
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};

#endif