#include "ShieldBearer.h"

ShieldBearer::ShieldBearer()
{
    this->healthPerSoldier = 300;
    this->damagePerSoldier = 30;
    this->defencePerSoldier = 3000;
    this->amountOfSoldiersPerUnit = 30;
    this->unitName = "ShieldBearer";
}

ShieldBearer::ShieldBearer(const ShieldBearer& soldier)
{
    this->healthPerSoldier = soldier.healthPerSoldier;
    this->damagePerSoldier = soldier.damagePerSoldier;
    this->defencePerSoldier = soldier.defencePerSoldier;
    this->amountOfSoldiersPerUnit = soldier.amountOfSoldiersPerUnit;
    this->unitName = soldier.unitName;
}

Soldiers* ShieldBearer::clonis()
{
    return new ShieldBearer(*this);
}

void ShieldBearer::prepare()
{
    std::cout << "ShieldBearers form a defensive wall around the other soldiers" << std::endl;
}

void ShieldBearer::execute()
{
    std::cout << "ShieldBearers march towards the enemies" << std::endl;
}

void ShieldBearer::retreat()
{
    std::cout << "ShieldBearers get into a defensive formation and retreat" << std::endl;
}

void ShieldBearer::rest()
{
    std::cout << "ShieldBearers rest" << std::endl;
}

int ShieldBearer::getHealth()
{
    return this->healthPerSoldier;
}

int ShieldBearer::getDamage()
{
    return this->damagePerSoldier;
}

int ShieldBearer::getDefence()
{
    return this->defencePerSoldier;
}

int ShieldBearer::getTotalSoldiers()
{
    return this->amountOfSoldiersPerUnit;
}

std::string ShieldBearer::getUnitName()
{
    return this->unitName;
}

void ShieldBearer::enemyAttack()
{
    std::cout << "Watch out, Enemy Attacks!" << '\n';
    this->healthPerSoldier-= (3254 - this->defencePerSoldier);
}

void ShieldBearer::reviveSoldier(Memento *mem)
{
    if (mem==NULL)
        return;
    std::cout << "Medic Called. Healing you Shield Bearer" << '\n';
    this->vivificaMemento(mem);
}

void ShieldBearer::setHealth(int health)
{
    this->healthPerSoldier = health;
}

void ShieldBearer::setDamage(int damage)
{
    this->damagePerSoldier = damage;
}

void ShieldBearer::setDefense(int defense)
{
    this->defencePerSoldier = defense;
}

void ShieldBearer::setAmount(int Amount)
{
    this->amountOfSoldiersPerUnit = Amount;
}

void ShieldBearer::setName(std::string name)
{
    this->unitName = name;
}
