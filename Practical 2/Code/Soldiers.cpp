#include "Soldiers.h"
#include "Memento.h"

void Soldiers::engage()
{
    prepare();
    execute();
}

void Soldiers::disengage()
{
    retreat();
    rest();
}

Soldiers::~Soldiers()
{

}

Memento *Soldiers::militusMemento()
{
    return new Memento(this->getHealth(), this->getDamage(), this->getDefence(), this->getTotalSoldiers(), this->getUnitName());
}

void Soldiers::vivificaMemento(Memento *mem)
{
    if (mem==NULL)
        return;
    this->setHealth(mem->getHealth());
    this->setDamage(mem->getDamage());
    this->setDefense(mem->getDefence());
    this->setAmount(mem->getTotalSoldiers());
    this->setName(mem->getUnitName());
}
