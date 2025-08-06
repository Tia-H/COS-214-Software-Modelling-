#include "Caretaker.h"
#include <string>
#include <iostream>

Caretaker::Caretaker()
{
}

void Caretaker::AddMemento(Memento *mem)
{
    if (mem==NULL)
        return;

    this->collection[mem->getUnitName()] = mem;
}

Memento *Caretaker::retrieveMemento(std::string key)
{
    std::map<std::string,Memento*>::iterator loop =  collection.begin();
    while (loop!=collection.end())
    {
        if (loop->first==key)
        {
            return this->collection.at(key);
        }
        loop++;
    }

    return NULL;
   // Memento* mem = new Memento(0,0,0,0,"invalid");
    //return mem;
}

std::map<std::string, Memento *> Caretaker::getCollection()
{
    return this->collection;
}

Caretaker::~Caretaker()
{
    /*std::map<std::string,Memento*>::iterator loop =  collection.begin();
    while (loop!=collection.end())
    {
        //Memento* item = loop->second;
            if (loop->second!=NULL)
            {
                delete loop->second;
            }
        loop++;
    }
    collection.clear();*/
}
