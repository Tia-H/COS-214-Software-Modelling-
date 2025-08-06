#include "WoodlandFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandArtillery.h"
#include "WoodlandCavalry.h"

Infantry* WoodlandFactory::createInfantry()
{
    return new WoodlandInfantry();
}

Cavalry* WoodlandFactory::createCavalry()
{
    return new WoodlandCavalry();
}

Artillery* WoodlandFactory::createArtillery()
{
    return new WoodlandArtillery();
}

void WoodlandFactory::deployArtillery()
{
    std::cout << "Artillery deployed for Woodland terrain"<<std::endl;
}