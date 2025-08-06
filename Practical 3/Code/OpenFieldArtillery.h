#ifndef OPENFIELD_ARTILLERY_H
#define OPENFIELD_ARTILLERY_H

#include <iostream>
#include <string>
using namespace std;

#include "Artillery.h"

class OpenFieldArtillery: public Artillery
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        OpenFieldArtillery();
        //string getName();
};
#endif