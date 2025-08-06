#include "Legion.h"
#include <vector>
#include <iostream>

void Legion::move()
{
    std::cout << "Moves onto the battlefield" << std::endl;
}

void Legion::attack()
{
    std::cout << "Attacks the enemy!" << std::endl;
}

void Legion::add(UnitComponent *component)
{
    this->children.push_back(component);
    std::cout << "Added. New Size = " << this->children.size() << std::endl;
}

void Legion::remove(UnitComponent *component)
{
    std::vector<UnitComponent*>::iterator it;

    for(it = children.begin(); it != children.end(); ++it)
    {
        if (*it == component)
        {
            this->children.erase(it);
            std::cout << "Removing... new size = " << this->children.size() << std::endl;
            return;
        }
    }
}

UnitComponent *Legion::getChild(int param)
{
    return this->children.at(param);
}

Legion::~Legion()
{
    std::vector<UnitComponent*>::iterator it;

    for(it = this->children.begin(); it != children.end(); ++it)
    {
        delete *it;
    }
}