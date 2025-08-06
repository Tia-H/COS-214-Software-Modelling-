#include "TacticalCommand.h"
#include "WarArchives.h"
#include "TacticalPlanner.h"

void TacticalCommand::setStrategy(BattleStrategy *s)
{
    if (this->strategy != NULL)
    {
        //delete this->strategy;
        strategy=NULL;
    }
    
    this->strategy = s;
}

void TacticalCommand::executeStrategy()
{
    this->strategy->engage();
}

void TacticalCommand::chooseBestStrategy(WarArchives TiasArchive)
{
    
    BattleStrategy* best = TiasArchive.getBestStrategy();
    if (best==NULL)
    {
        std::cout << "Best Strategy: None";
    }else{
        std::cout << "Best Strategy out of " << TiasArchive.getNumArchive() <<" :" ;
        best->engage();
    }
    setStrategy(best);
    std::cout << std::endl;
}

TacticalCommand::~TacticalCommand()
{
    if (strategy!=NULL)
        delete this->strategy;
}
