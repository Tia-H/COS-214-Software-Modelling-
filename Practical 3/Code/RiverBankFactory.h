#ifndef RIVERBANK_FACTORY_H
#define RIVERBANK_FACTORY_H

#include <iostream>
#include <string>
using namespace std;

#include "LegionFactory.h"

class RiverBankFactory: public LegionFactory
{
    public:
        Infantry* createInfantry();
        Cavalry* createCavalry();
        Artillery* createArtillery();
        void deployArtillery();
};

#endif