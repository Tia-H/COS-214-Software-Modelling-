#ifndef RIVERBANK_CAVALRY_H
#define RIVERBANK_CAVALRY_H

#include <iostream>
#include <string>
using namespace std;

#include "Cavalry.h"

class RiverBankCavalry: public Cavalry
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        RiverBankCavalry();
        //string getName();
};
#endif