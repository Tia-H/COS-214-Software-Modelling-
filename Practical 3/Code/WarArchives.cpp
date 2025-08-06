#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento,string label)
{
    if (memento==NULL)
        return;

    archive[label] = memento;
}

void WarArchives::removeTacticalMemento(string label)
{
    archive.erase(label);
}

TacticalMemento* WarArchives::retrieveMemento(std::string key)
{
    std::map<std::string,TacticalMemento*>::iterator loop =  archive.begin();
    while (loop!=archive.end())
    {
        if (loop->first==key)
        {
            return this->archive.at(key);
        }
        loop++;
    }

    return NULL;
}

BattleStrategy* WarArchives::getBestStrategy()//based on most soldiers alive
{
    int damage=0;
    int alive=0;
    BattleStrategy* best;
    std::map<std::string,TacticalMemento*>::iterator loop =  archive.begin();
    while (loop!=archive.end())
    {
        TacticalMemento* current = loop->second;
        if (current!=NULL)
        {
            if (current->getAlive()>alive && current->getDamageDealt()>damage)
            {
                alive = current->getAlive();
                damage=current->getDamageDealt();
                if (best!=NULL)
                {
                    //best=NULL;
                    //delete best;
                }
                best = current->getCurrentStrategy();   
            }
        }
        loop++;
    }

    if (best!=NULL)
    {
        //std::cout << best->engage();
        return best;
    }

    return NULL;
}

int WarArchives::getNumArchive()
{
    std::map<std::string,TacticalMemento*>::iterator loop =  archive.begin();
    int i=0;
    while (loop!=archive.end())
    {
        loop++;
        i++;
    }

    return i;
}

WarArchives::~WarArchives()
{

}