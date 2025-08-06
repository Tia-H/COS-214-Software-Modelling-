#include "RiverBankFactory.h"
#include "RiverBankInfantry.h"
#include "RiverBankArtillery.h"
#include "RiverBankCavalry.h"

Infantry* RiverBankFactory::createInfantry()
{
    return new RiverBankInfantry();
}

Cavalry* RiverBankFactory::createCavalry()
{
    return new RiverBankCavalry();
}

Artillery* RiverBankFactory::createArtillery()
{
    return new RiverBankArtillery();
}

void RiverBankFactory::deployArtillery()
{
    std::cout << "Artillery deployed for Riverbank terrain"<<std::endl;
}