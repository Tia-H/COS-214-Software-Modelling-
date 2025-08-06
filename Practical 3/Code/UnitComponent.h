#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

class UnitComponent
{
    public:
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual void add(UnitComponent*){};
        virtual void remove(UnitComponent*){};
        virtual UnitComponent* getChild(int){return NULL;};
        virtual ~UnitComponent() {};
};

#endif