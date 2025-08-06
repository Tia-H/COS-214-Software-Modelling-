#ifndef CARETAKER_H
#define CARETAKER_H

#include <iostream>
#include <string>
#include "Memento.h"
#include <map>

class Caretaker
{
    private:
        std::map<std::string, Memento*> collection;
    public:
        Caretaker();
        void AddMemento(Memento* mem);
        Memento* retrieveMemento(std::string key);
        std::map<std::string, Memento*> getCollection();
        ~Caretaker();
};

#endif