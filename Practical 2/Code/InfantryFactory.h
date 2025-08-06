#ifndef INFANTRY_FACTORY_H
#define INFANTRY_FACTORY_H

#include "SoldierFactory.h"
#include "Infantry.h"

using namespace std;

class InfantryFactory: public SoldierFactory
{
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};

#endif