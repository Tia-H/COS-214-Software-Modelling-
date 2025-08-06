#ifndef LEGION_H
#define LEGION_H

#include <iostream>
#include <vector>
#include "UnitComponent.h"

class Legion : public UnitComponent
{
    private:
        std::vector<UnitComponent*> children;
    public:
        void move();
        void attack();
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
        UnitComponent* getChild(int param);
        virtual ~Legion();
};

#endif