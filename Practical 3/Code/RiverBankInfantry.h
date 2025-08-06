#ifndef RIVERBANK_INFANTRY_H
#define RIVERBANK_INFANTRY_H

#include <iostream>
#include <string>
using namespace std;

#include "Infantry.h"

class RiverBankInfantry: public Infantry
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        RiverBankInfantry();
        //string getName();
};
#endif