#ifndef WOODLAND_INFANTRY_H
#define WOODLAND_INFANTRY_H

#include <iostream>
#include <string>
using namespace std;

#include "Infantry.h"

class WoodlandInfantry: public Infantry
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        WoodlandInfantry();
        //string getName();
};
#endif