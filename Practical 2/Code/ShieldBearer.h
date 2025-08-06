#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "Soldiers.h"
using namespace std;

class ShieldBearer: public Soldiers
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;
    public:
        ShieldBearer();
        ShieldBearer(const ShieldBearer& soldier);

        Soldiers* clonis();
        void engage();
        void disengage();
        void prepare();
        void execute();
        void retreat();
        void rest();

        //own additional functions
        int getHealth();
        int getDamage();
        int getDefence();
        int getTotalSoldiers();
        std::string getUnitName();
        void enemyAttack();
        void reviveSoldier(Memento* mem);

        void setHealth(int health);
        void setDamage(int damage);
        void setDefense(int defense);
        void setAmount(int Amount);
        void setName(std::string name);
};

#endif