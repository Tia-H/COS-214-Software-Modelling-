#ifndef MEMENTO_H
#define MEMENTO_H
#include <iostream>

class Soldiers;

class Memento
{
    private:

        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;
        Memento(int value1, int value2, int value3, int value4, std::string value5);

        friend class Soldiers;
    public:

        //own functions:
        int getHealth();
        int getDamage();
        int getDefence();
        int getTotalSoldiers();
        std::string getUnitName();
};

#endif