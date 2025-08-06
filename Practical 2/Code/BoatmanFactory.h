#ifndef BOATMAN_FACTORY_H
#define BOATMAN_FACTORY_H

#include "SoldierFactory.h"
#include "Boatman.h"

using namespace std;

class BoatmanFactory: public SoldierFactory
{
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};

#endif