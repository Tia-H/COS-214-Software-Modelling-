#ifndef OPENFIELD_FACTORY_H
#define OPENFIELD_FACTORY_H

#include <iostream>
#include <string>
using namespace std;

#include "LegionFactory.h"

class OpenFieldFactory: public LegionFactory
{
    public:
        Infantry* createInfantry();
        Cavalry* createCavalry();
        Artillery* createArtillery();
        void deployArtillery();
};

#endif