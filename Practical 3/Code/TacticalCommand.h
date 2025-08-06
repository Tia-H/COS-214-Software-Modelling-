#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H
#include "BattleStrategy.h"
#include "WarArchives.h"

class TacticalCommand
{
    private:
        BattleStrategy* strategy;
    public:
        void setStrategy(BattleStrategy* s);
        void executeStrategy();
        void chooseBestStrategy(WarArchives TiasArchive);
        ~TacticalCommand();
};

#endif