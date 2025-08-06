#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
using namespace std;
#include "Memento.h"

class Soldiers
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;
    public:
        virtual Soldiers* clonis()=0;
        void engage();
        void disengage();
        virtual void prepare()=0;
        virtual void execute()=0;
        virtual void retreat()=0;
        virtual void rest()=0;
        Memento* militusMemento();
        void vivificaMemento(Memento* mem);

        //own additional functions
        virtual int getHealth() = 0;
        virtual int getDamage() = 0;
        virtual int getDefence() = 0;
        virtual int getTotalSoldiers() = 0;
        virtual std::string getUnitName() = 0;
        virtual ~Soldiers();
        virtual void enemyAttack() = 0;
        virtual void reviveSoldier(Memento* mem) = 0;
        virtual void setHealth(int health) = 0;
        virtual void setDamage(int damage) = 0;
        virtual void setDefense(int defense) = 0;
        virtual void setAmount(int Amount) = 0;
        virtual void setName(std::string name) = 0;
};

#endif