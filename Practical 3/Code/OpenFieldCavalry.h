#ifndef OPENFIELD_CAVALRY_H
#define OPENFIELD_CAVALRY_H

#include <iostream>
#include <string>
using namespace std;

#include "Cavalry.h"
//class Cavalry;

class OpenFieldCavalry: public Cavalry
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        OpenFieldCavalry();
        //string getName();
};
#endif