#ifndef WOODLAND_ARTILLERY_H
#define WOODLAND_ARTILLERY_H

#include <iostream>
#include <string>
using namespace std;

#include "Artillery.h"

class WoodlandArtillery: public Artillery
{
    private:
        int defense;
        int damage;
        int health;
        std::string name;
    public:
        WoodlandArtillery();
        //string getName();
};
#endif