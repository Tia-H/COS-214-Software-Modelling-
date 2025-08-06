#ifndef WAR_ARCHIVES_H
#define WAR_ARCHIVES_H
#include "TacticalMemento.h"
#include <map>

class WarArchives
{
    private:
        std::map<std::string, TacticalMemento*> archive;
    public:
        void addTacticalMemento(TacticalMemento* memento,string label);
        void removeTacticalMemento(string label);
        TacticalMemento* retrieveMemento(std::string key);
        BattleStrategy* getBestStrategy();
        int getNumArchive();
        ~WarArchives();
};

#endif