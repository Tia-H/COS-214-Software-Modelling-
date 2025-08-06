#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

class BattleStrategy
{
    public:
        virtual void engage() const = 0;
        virtual ~BattleStrategy() = default;
};

#endif