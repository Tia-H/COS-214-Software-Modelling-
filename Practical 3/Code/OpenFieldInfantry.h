#ifndef OPENFIELD_INFANTRY_H
#define OPENFIELD_INFANTRY_H

#include <iostream>
#include <string>
using namespace std;

#include "Infantry.h"

class OpenFieldInfantry: public Infantry
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        OpenFieldInfantry();
        //string getName();
};
#endif