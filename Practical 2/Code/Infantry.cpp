#include "Infantry.h"

Infantry::Infantry()
{
    this->healthPerSoldier = 250;
    this->damagePerSoldier = 2500;
    this->defencePerSoldier = 25;
    this->amountOfSoldiersPerUnit = 25;
    this->unitName = "Infantry";
}

Infantry::Infantry(const Infantry& soldier)
{
   this->healthPerSoldier = soldier.healthPerSoldier;
    this->damagePerSoldier = soldier.damagePerSoldier;
    this->defencePerSoldier = soldier.defencePerSoldier;
    this->amountOfSoldiersPerUnit = soldier.amountOfSoldiersPerUnit;
    this->unitName = soldier.unitName;
}
Soldiers* Infantry::clonis()
{
    return new Infantry(*this);
}

void Infantry::prepare()
{
    std::cout << "Infantry form tight defensive formations" << std::endl;
}

void Infantry::execute()
{
    std::cout << "Infantry marches towards enemies and attacks" << std::endl;
}

void Infantry::retreat()
{
    std::cout << "Infantry reforms a defensive position and retreat" << std::endl;
}

void Infantry::rest()
{
    std::cout << "Infantry rests" << std::endl;
}

int Infantry::getHealth()
{
    return this->healthPerSoldier;
}

int Infantry::getDamage()
{
    return this->damagePerSoldier;
}

int Infantry::getDefence()
{
    return this->defencePerSoldier;
}

int Infantry::getTotalSoldiers()
{
    return this->amountOfSoldiersPerUnit;
}

std::string Infantry::getUnitName()
{
    return this->unitName;
}

void Infantry::enemyAttack()
{
    std::cout << "Watch out, Enemy Attacks!" << '\n';
    this->healthPerSoldier-= (50 - this->defencePerSoldier);
}

void Infantry::reviveSoldier(Memento *mem)
{
    if (mem==NULL)
        return;
    std::cout << "Medic Called. Healing you Infantry" << '\n';
    this->vivificaMemento(mem);
}

void Infantry::setHealth(int health)
{
    this->healthPerSoldier = health;
}

void Infantry::setDamage(int damage)
{
    this->damagePerSoldier = damage;
}

void Infantry::setDefense(int defense)
{
    this->defencePerSoldier = defense;
}

void Infantry::setAmount(int Amount)
{
    this->amountOfSoldiersPerUnit = Amount;
}

void Infantry::setName(std::string name)
{
    this->unitName = name;
}
