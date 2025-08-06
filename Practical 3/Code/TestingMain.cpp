#include "LegionFactory.h"
#include "UnitComponent.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"
#include "RiverBankFactory.h"
//#include "RiverBankInfantry.h"
////#include "RiverBankArtillery.h"
//#include "RiverBankCavalry.h"
//#include "OpenFieldInfantry.h"
//#include "OpenFieldArtillery.h"
//#include "OpenFieldCavalry.h"
//#include "WoodlandInfantry.h"
//#include "WoodlandArtillery.h"
//#include "WoodlandCavalry.h"
#include "UnitComponent.h"
#include "Legion.h"
#include "BattleStrategy.h"
#include "TacticalCommand.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"
#include "TacticalPlanner.h"
#include "TacticalMemento.h"
#include "WarArchives.h"

using namespace std;


void testWoodland()
{
    std::cout<<"TEST WOODLANDS:"<<std::endl;
    WoodlandFactory JasminesArmy;
    Artillery* JA = JasminesArmy.createArtillery();
    Cavalry* JC =JasminesArmy.createCavalry();
    Infantry* JI =JasminesArmy.createInfantry();

    JasminesArmy.deployArtillery();

    JA->move();
    JC->move();
    JI->move();
    JA->attack();
    JC->attack();
    JI->attack();

    delete JA;
    delete JC;
    delete JI;
}

void testRiverBank()
{
    std::cout<<"TEST RIVERBANK:"<<std::endl;
    RiverBankFactory JasminesArmy;
    Artillery* JA = JasminesArmy.createArtillery();
    Cavalry* JC =JasminesArmy.createCavalry();
    Infantry* JI =JasminesArmy.createInfantry();

    JasminesArmy.deployArtillery();

    JA->move();
    JC->move();
    JI->move();
    JA->attack();
    JC->attack();
    JI->attack();

    delete JA;
    delete JC;
    delete JI;
}

void testOpenField()
{
    std::cout<<"TEST OPENFIELD:"<<std::endl;
    OpenFieldFactory JasminesArmy;
    Artillery* JA = JasminesArmy.createArtillery();
    Cavalry* JC =JasminesArmy.createCavalry();
    Infantry* JI =JasminesArmy.createInfantry();

    JasminesArmy.deployArtillery();

    JA->move();
    JC->move();
    JI->move();
    JA->attack();
    JC->attack();
    JI->attack();

    delete JA;
    delete JC;
    delete JI;
}

void testAbstractFactory()
{
    std::cout << "<----------- ABSTRACT FACTORY TEST ----------->"<<std::endl;
    testWoodland();
    std::cout << std::endl;
    testOpenField();
    std::cout << std::endl;
    testRiverBank();
    std::cout << "-----------------------------------------------"<<std::endl;
    std::cout << std::endl;
}

void testTactics()
{
    cout << "<----------- MILITARY TACTICS TEST ----------->" << endl;
    UnitComponent* KeanusLegion = new Legion();
    RiverBankFactory KeanusBetterIsArmyThanJasmines;
    Artillery* KA = KeanusBetterIsArmyThanJasmines.createArtillery();
    Cavalry* KC =KeanusBetterIsArmyThanJasmines.createCavalry();
    Infantry* KI =KeanusBetterIsArmyThanJasmines.createInfantry();

    KeanusLegion->add(new Legion());
    KeanusLegion->add(KA);
    KeanusLegion->add(KC);
    KeanusLegion->add(KI);

    KeanusLegion->getChild(1)->attack();
    KeanusLegion->getChild(0)->attack();

    KeanusLegion->getChild(2)->move();
    KeanusLegion->getChild(2)->attack();
    KeanusLegion->getChild(3)->move();
    KeanusLegion->getChild(3)->attack();

    KeanusLegion->remove(KA);

    delete KeanusLegion;
    delete KA;
    cout << "-----------------------------------------------"<<endl;
    std::cout << std::endl;
}

void testBattleStrategy()
{
    cout << "<----------- BATTLE STRATEGIES TEST ----------->" << endl;
    TacticalCommand* KeanusCommand = new TacticalCommand();
    Ambush* KA = new Ambush();
    KeanusCommand->setStrategy(KA);
    KeanusCommand->executeStrategy();

    Flanking* KJ = new Flanking();
    KeanusCommand->setStrategy(KJ);
    KeanusCommand->executeStrategy();

    KeanusCommand->setStrategy(new Fortification());
    KeanusCommand->executeStrategy();

    delete KA;
    delete KJ;
    delete KeanusCommand;
    cout << "-----------------------------------------------"<< endl;
    std::cout << std::endl;
}

void testMemento()
{
    cout << "<---------------- MEMENTO TEST ---------------->" << endl;
    TacticalCommand commandTia;
    TacticalPlanner JasminesPlanner;
    WarArchives TiasArchive;
    Ambush* JasminesStrat1 = new Ambush();
    Flanking* JasminesStrat2 = new Flanking();
    Fortification* JasminesStrat3 = new Fortification();

    JasminesPlanner.setStrat(JasminesStrat1);
    TacticalMemento* TiasMemento1 = JasminesPlanner.createMemento(100,1000,100);
    //commandTia.setStrategy(JasminesStrat1);
    TiasArchive.addTacticalMemento(TiasMemento1, "JasminesStrat1");
    commandTia.chooseBestStrategy(TiasArchive);

    JasminesPlanner.setStrat(JasminesStrat2);
    TacticalMemento* TiasMemento2 = JasminesPlanner.createMemento(400,4000,400);
    //commandTia.setStrategy(JasminesStrat2);
    TiasArchive.addTacticalMemento(TiasMemento2, "JasminesStrat2");
    commandTia.chooseBestStrategy(TiasArchive);

    JasminesPlanner.setStrat(JasminesStrat3);
    TacticalMemento* TiasMemento3 = JasminesPlanner.createMemento(200,2000,200);
    TiasArchive.addTacticalMemento(TiasMemento3, "JasminesStrat3");
    //commandTia.setStrategy(JasminesStrat3);
    commandTia.chooseBestStrategy(TiasArchive);

    JasminesPlanner.restoreMemento(*(TiasArchive.retrieveMemento("JasminesStrat1")));
    commandTia.setStrategy(JasminesPlanner.getCurrentStrategy());
    cout << "-----------------------------------------------"<< endl;
    std::cout << std::endl;

    if (JasminesStrat2!=NULL)
    {
        delete JasminesStrat2;
    }
    if (JasminesStrat3!=NULL)
    {
        delete JasminesStrat3;
    }
    delete TiasMemento1;
    delete TiasMemento2;
    delete TiasMemento3;
}

void CallOfDestiny()
{
    cout << endl;
    cout << "--------------------------------------------------------------------"<< endl;
    cout << "            WELCOME TO 'THE CALL OF DESTINY: PART II'"<< std::endl;
    cout << "--------------------------------------------------------------------"<< endl;
    cout << endl;

    std::cout << "Planning strategies to use..." <<endl;
    cout<<endl;
    Ambush* JasminesStrat1 = new Ambush();
    Flanking* JasminesStrat2 = new Flanking();
    Fortification* JasminesStrat3 = new Fortification();
    cout<<endl;

    std::cout << "Creating Legion..." <<endl;
    cout<<endl;
    UnitComponent* KeanusLegion = new Legion();
    RiverBankFactory KeanusBetterIsArmyThanJasmines;
    Artillery* KA = KeanusBetterIsArmyThanJasmines.createArtillery();
    Cavalry* KC =KeanusBetterIsArmyThanJasmines.createCavalry();
    Infantry* KI =KeanusBetterIsArmyThanJasmines.createInfantry();
    KeanusLegion->add(new Legion());
    KeanusLegion->add(KA);
    KeanusLegion->add(KC);
    KeanusLegion->add(KI);
    cout<<endl;

    std::cout << "Selecting best strategy from archives..." <<endl;
    cout<<endl;
    TacticalCommand commandTia;
    TacticalPlanner JasminesPlanner;
    WarArchives TiasArchive;
    JasminesPlanner.setStrat(JasminesStrat1);
    TacticalMemento* TiasMemento1 = JasminesPlanner.createMemento(100,1000,100);
    TiasArchive.addTacticalMemento(TiasMemento1, "JasminesStrat1");
    JasminesPlanner.setStrat(JasminesStrat2);
    TacticalMemento* TiasMemento2 = JasminesPlanner.createMemento(400,4000,400);
    commandTia.setStrategy(JasminesStrat2);
    TiasArchive.addTacticalMemento(TiasMemento2, "JasminesStrat2");
    JasminesPlanner.setStrat(JasminesStrat3);
    TacticalMemento* TiasMemento3 = JasminesPlanner.createMemento(200,2000,200);
    TiasArchive.addTacticalMemento(TiasMemento3, "JasminesStrat3");
    commandTia.chooseBestStrategy(TiasArchive);
    commandTia.executeStrategy();
    cout<<endl;

    std::cout << "Preparing attack..." <<endl;
    cout<<endl;
    KeanusLegion->getChild(1)->attack();
    KeanusLegion->getChild(0)->attack();

    KeanusLegion->getChild(2)->move();
    KeanusLegion->getChild(2)->attack();
    KeanusLegion->getChild(3)->move();
    KeanusLegion->getChild(3)->attack();
    KeanusLegion->remove(KA);

    delete KeanusLegion;
    delete KA;
    delete JasminesStrat1;
    delete JasminesStrat3;
    delete TiasMemento1;
    delete TiasMemento2;
    delete TiasMemento3;
}


int main()
{
    testAbstractFactory();

    testTactics();

    testMemento();

    testBattleStrategy();

    CallOfDestiny();

    return 0;
}