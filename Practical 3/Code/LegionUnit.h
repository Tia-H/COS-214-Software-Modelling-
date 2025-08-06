#ifndef LEGION_UNIT_H
#define LEGION_UNIT_H

#include <iostream>
#include <string>
using namespace std;

class LegionUnit
{
    public:
        virtual void move()=0;
        virtual void attack()=0;
        virtual ~LegionUnit(){};
};

#endif