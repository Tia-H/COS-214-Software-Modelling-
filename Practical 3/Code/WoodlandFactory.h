#ifndef WOODLAND_FACTORY_H
#define WOODLAND_FACTORY_H

#include <iostream>
#include <string>
using namespace std;

#include "LegionFactory.h"

class WoodlandFactory: public LegionFactory
{
    public:
        Infantry* createInfantry();
        Cavalry* createCavalry();
        Artillery* createArtillery();
        void deployArtillery();
};

#endif