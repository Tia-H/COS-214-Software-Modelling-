#include "Boatman.h"

Boatman::Boatman()
{
    this->healthPerSoldier = 100;
    this->damagePerSoldier = 10;
    this->defencePerSoldier = 10;
    this->amountOfSoldiersPerUnit = 10;
    this->unitName = "Boatman";
}

Boatman::Boatman(const Boatman& soldier)
{
    this->healthPerSoldier = soldier.healthPerSoldier;
    this->damagePerSoldier = soldier.damagePerSoldier;
    this->defencePerSoldier = soldier.defencePerSoldier;
    this->amountOfSoldiersPerUnit = soldier.amountOfSoldiersPerUnit;
    this->unitName = soldier.unitName;
}

Soldiers* Boatman::clonis()
{
    return new Boatman(*this);
}

void Boatman::prepare()
{
    std::cout << "Boatmen maneuvering boats into strategic positions" << std::endl;
}

void Boatman::execute()
{
    std::cout << "Boatmen fire cannons" << std::endl;
}

void Boatman::retreat()
{
    std::cout << "Boatmen maneuver boats into a defensive formation and retreat" << std::endl;
}

void Boatman::rest()
{
    std::cout << "Boatmen rest" << std::endl;
}

int Boatman::getHealth()
{
    return this->healthPerSoldier;
}

int Boatman::getDamage()
{
    return this->damagePerSoldier;
}

int Boatman::getDefence()
{
    return this->defencePerSoldier;
}

int Boatman::getTotalSoldiers()
{
    return this->amountOfSoldiersPerUnit;
}

std::string Boatman::getUnitName()
{
    return this->unitName;
}

void Boatman::enemyAttack()
{
    std::cout << "Watch out, Enemy Attacks!" << '\n';
    this->healthPerSoldier-= (37 - this->defencePerSoldier);
}

void Boatman::reviveSoldier(Memento *mem)
{
    if (mem==NULL)
        return;
    std::cout << "Medic Called. Healing you Boatman" << '\n';
    this->vivificaMemento(mem);
}

void Boatman::setHealth(int health)
{
    this->healthPerSoldier = health;
}

void Boatman::setDamage(int damage)
{
    this->damagePerSoldier = damage;
}

void Boatman::setDefense(int defense)
{
    this->defencePerSoldier = defense;
}

void Boatman::setAmount(int Amount)
{
    this->amountOfSoldiersPerUnit = Amount;
}

void Boatman::setName(std::string name)
{
    this->unitName = name;
}
