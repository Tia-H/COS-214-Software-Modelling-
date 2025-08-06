#include "OpenFieldFactory.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"

Infantry* OpenFieldFactory::createInfantry()
{
    return new OpenFieldInfantry();
}

Cavalry* OpenFieldFactory::createCavalry()
{
    return new OpenFieldCavalry();
}

Artillery* OpenFieldFactory::createArtillery()
{
    return new OpenFieldArtillery();
}

void OpenFieldFactory::deployArtillery()
{
    std::cout << "Artillery deployed for Open Field terrain"<<std::endl;
}