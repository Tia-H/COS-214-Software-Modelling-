#include "Memento.h"

Memento::Memento(int value1, int value2, int value3, int value4, std::string value5)
{
    this->healthPerSoldier = value1;
    this->damagePerSoldier = value2;
    this->defencePerSoldier = value3;
    this->amountOfSoldiersPerUnit = value4;
    this->unitName = value5;
}

int Memento::getHealth()
{
    return healthPerSoldier;
}

int Memento::getDamage()
{
    return damagePerSoldier;
}

int Memento::getDefence()
{
    return defencePerSoldier;
}

int Memento::getTotalSoldiers()
{
    return amountOfSoldiersPerUnit;
}

std::string Memento::getUnitName()
{
    return this->unitName;
}
