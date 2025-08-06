#ifndef SOLDIER_FACTORY_H
#define SOLDIER_FACTORY_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Soldiers.h"
using namespace std;

class SoldierFactory
{
    private:
        Soldiers* soldiers;
    public:
        void setSoldiers(Soldiers* newSoldier);
        Soldiers* getSoldiers();
        Soldiers* create();
    protected:
        virtual Soldiers* createUnit()=0;
        virtual int calculateTotalHealthPerUnit()=0;
        virtual int calculateTotalDamagePerUnit()=0;
        virtual int calculateTotalDefencePerUnit()=0;
};

#endif