#ifndef LEGION_FACTORY_H
#define LEGION_FACTORY_H

#include <iostream>
#include <string>
using namespace std;

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class LegionFactory
{
    public:
        virtual Infantry* createInfantry()=0;
        virtual Cavalry* createCavalry()=0;
        virtual Artillery* createArtillery()=0;
        virtual ~LegionFactory(){};
};

#endif