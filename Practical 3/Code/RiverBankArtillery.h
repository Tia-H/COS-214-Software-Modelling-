#ifndef RIVERBANK_ARTILLERY_H
#define RIVERBANK_ARTILLERY_H

#include <iostream>
#include <string>
using namespace std;

#include "Artillery.h"

class RiverBankArtillery: public Artillery
{
    private:
        int defense;
        int damage;
        int health;
        string name;
    public:
        RiverBankArtillery();
        //string getName();
};
#endif