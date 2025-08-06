#ifndef WOODLAND_CAVALRY_H
#define WOODLAND_CAVALRY_H

#include <iostream>
#include <string>
using namespace std;

#include "Cavalry.h"

class WoodlandCavalry: public Cavalry
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        WoodlandCavalry();
        //string getName();
};
#endif