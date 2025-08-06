//u22893459
//u23562732

#include "Infantry.h"
#include "Boatman.h"
#include "ShieldBearer.h"
#include "InfantryFactory.h"
#include "BoatmanFactory.h"
#include "ShieldBearerFactory.h"
#include "Memento.h"
#include "Caretaker.h"

void testSoldiers()
{
    std::cout << "<--------- SOLDIERS --------->"<< std::endl;
        std::cout <<"BOATS:"<<std::endl;
    Soldiers* JasminesBoats = new Boatman();
    Soldiers* cloneBoats = JasminesBoats->clonis();
    JasminesBoats->engage();
    JasminesBoats->disengage();
    cloneBoats->engage();
    cloneBoats->disengage();
    //own functions
    std::cout << "---Stats---" << std::endl;
    std::cout << "Health:" << JasminesBoats->getHealth() << std::endl;
    std::cout << "Damage:" << JasminesBoats->getDamage() << std::endl;
    std::cout << "Defence:" << JasminesBoats->getDefence() << std::endl;
    std::cout << "Total:" << JasminesBoats->getTotalSoldiers() << std::endl;
    std::cout << "Name:" << JasminesBoats->getUnitName() << std::endl;
    std::cout << "-----------" <<std::endl;
    JasminesBoats->enemyAttack();
    std::cout << "Health:" << JasminesBoats->getHealth() << std::endl;
    std::cout << "---Setters---" << std::endl;
    JasminesBoats->setHealth(500);
    std::cout << "Health:" << JasminesBoats->getHealth() << std::endl;
    JasminesBoats->setDamage(25);
    std::cout << "Damage:" << JasminesBoats->getDamage() << std::endl;
    JasminesBoats->setDefense(1);
    std::cout << "Defence:" << JasminesBoats->getDefence() << std::endl;
    JasminesBoats->setName("Jasmines boats");
    std::cout << "Name:" << JasminesBoats->getUnitName() << std::endl;
    std::cout << "-----------" <<std::endl;
    std::cout<<std::endl;

        std::cout <<"INFANTRY:"<<std::endl;
    Soldiers* JasminesArmy = new Infantry();
    Soldiers* cloneArmy = JasminesArmy->clonis();
    JasminesArmy->engage();
    JasminesArmy->disengage();
    cloneArmy->engage();
    cloneArmy->disengage();
    //own functions
    std::cout << "---Stats---" << std::endl;
    std::cout << "Health:" << JasminesArmy->getHealth() << std::endl;
    std::cout << "Damage:" << JasminesArmy->getDamage() << std::endl;
    std::cout << "Defence:" << JasminesArmy->getDefence() << std::endl;
    std::cout << "Total:" << JasminesArmy->getTotalSoldiers() << std::endl;
    std::cout << "Name:" << JasminesArmy->getUnitName() << std::endl;
    std::cout << "-----------" <<std::endl;
    JasminesArmy->enemyAttack();
    std::cout << "Health:" << JasminesArmy->getHealth() << std::endl;
    std::cout << "---Setters---" << std::endl;
    JasminesArmy->setHealth(500);
    std::cout << "Health:" << JasminesArmy->getHealth() << std::endl;
    JasminesArmy->setDamage(25);
    std::cout << "Damage:" << JasminesArmy->getDamage() << std::endl;
    JasminesBoats->setDefense(1);
    std::cout << "Defence:" << JasminesArmy->getDefence() << std::endl;
    JasminesArmy->setName("Jasmines Army");
    std::cout << "Name:" << JasminesArmy->getUnitName() << std::endl;
    std::cout << "-----------" <<std::endl;
    std::cout<<std::endl;

        std::cout <<"SHIELDBEARERS:"<<std::endl;
    Soldiers* JasminesShields = new ShieldBearer();
    Soldiers* cloneShields = JasminesShields->clonis();
    JasminesShields->engage();
    JasminesShields->disengage();
    cloneShields->engage();
    cloneShields->disengage();
    //own functions
    std::cout << "---Stats---" << std::endl;
    std::cout << "Health:" << JasminesShields->getHealth() << std::endl;
    std::cout << "Damage:" << JasminesShields->getDamage() << std::endl;
    std::cout << "Defence:" << JasminesShields->getDefence() << std::endl;
    std::cout << "Total:" << JasminesShields->getTotalSoldiers() << std::endl;
    std::cout << "Name:" << JasminesShields->getUnitName() << std::endl;
    std::cout << "-----------" <<std::endl;
    JasminesShields->enemyAttack();
    std::cout << "Health:" << JasminesShields->getHealth() << std::endl;
    std::cout << "---Setters---" << std::endl;
    JasminesShields->setHealth(500);
    std::cout << "Health:" << JasminesShields->getHealth() << std::endl;
    JasminesShields->setDamage(25);
    std::cout << "Damage:" << JasminesShields->getDamage() << std::endl;
    JasminesShields->setDefense(1);
    std::cout << "Defence:" << JasminesShields->getDefence() << std::endl;
    JasminesShields->setName("Jasmines shields");
    std::cout << "Name:" << JasminesShields->getUnitName() << std::endl;
    std::cout << "-----------" <<std::endl;


    delete cloneShields;
    delete cloneArmy;
    delete cloneBoats;
    delete JasminesShields;
    delete JasminesBoats;
    delete JasminesArmy;
}

void testMemento()
{
    std::cout << "<--------- MEMENTO/CARETAKER --------->"<< std::endl;
        std::cout <<"BOATS:"<<std::endl;
    Soldiers* JasminesBoats = new Boatman();
    std::cout<<"--------------"<<std::endl;
    std::cout<<"Memento stats:"<<std::endl;
    Caretaker* KeanusCaretaker1 = new Caretaker();
    Memento* KeanusMemento1 = JasminesBoats->militusMemento();
    KeanusCaretaker1->AddMemento(KeanusMemento1);
    std::cout << "Size of caretaker = " << KeanusCaretaker1->getCollection().size() << "\n";
    std::cout << "Health = " << KeanusCaretaker1->retrieveMemento("Boatman")->getHealth() << "\n";
    std::cout << "Health = " << KeanusCaretaker1->retrieveMemento("Boatman")->getDamage() << "\n";
    std::cout << "Health = " << KeanusCaretaker1->retrieveMemento("Boatman")->getDefence() << "\n";
    std::cout << "Health = " << KeanusCaretaker1->retrieveMemento("Boatman")->getTotalSoldiers() << "\n";
    JasminesBoats->enemyAttack();
    std::cout << "Health = " << JasminesBoats->getHealth() << "\n";
    JasminesBoats->reviveSoldier(KeanusCaretaker1->retrieveMemento("Boatman"));
    std::cout << "Health = " << JasminesBoats->getHealth() << "\n";
    std::cout<<"--------------"<<std::endl;
    std::cout<<std::endl;

        std::cout <<"INFANTRY:"<<std::endl;
    Soldiers* JasminesArmy = new Infantry();
    //test getters
    std::cout << "Health of Infantry = " << JasminesArmy->getHealth() << '\n';
    std::cout << "Name = " << JasminesArmy->getUnitName() << '\n';
    //test memento
    std::cout<<"--------------"<<std::endl;
    std::cout<<"Memento stats:"<<std::endl;
    Caretaker* KeanusCaretaker = new Caretaker();
    Memento* KeanusMemento = JasminesArmy->militusMemento();
    KeanusCaretaker->AddMemento(KeanusMemento);
    std::cout << "Size of caretaker = " << KeanusCaretaker->getCollection().size() << "\n";
    std::cout << "Health = " << KeanusCaretaker->retrieveMemento("Infantry")->getHealth() << "\n";
    std::cout << "Health = " << KeanusCaretaker->retrieveMemento("Infantry")->getDamage() << "\n";
    std::cout << "Health = " << KeanusCaretaker->retrieveMemento("Infantry")->getDefence() << "\n";
    std::cout << "Health = " << KeanusCaretaker->retrieveMemento("Infantry")->getTotalSoldiers() << "\n";
    JasminesArmy->enemyAttack();
    std::cout << "Health = " << JasminesArmy->getHealth() << "\n";
    JasminesArmy->reviveSoldier(KeanusCaretaker->retrieveMemento("Infantry"));
    std::cout << "Health = " << JasminesArmy->getHealth() << "\n";
    std::cout<<"--------------"<<std::endl;
    std::cout<<std::endl;

        std::cout <<"SHIELDBEARERS:"<<std::endl;
    Soldiers* JasminesShields = new ShieldBearer();

    delete JasminesShields;
    delete JasminesBoats;
    delete JasminesArmy;
    delete KeanusMemento;
    delete KeanusMemento1;
    delete KeanusCaretaker;
    delete KeanusCaretaker1;
}

void testFactories()
{
    std::cout << "<--------- FACTORIES --------->" <<std::endl;
            std::cout <<"BOATS:"<<std::endl;
    BoatmanFactory BoatFactory;
    Soldiers* soldier1= BoatFactory.createUnit();
    Soldiers* boats= BoatFactory.createUnit();
    std::cout <<"---Stats per unit---" <<std::endl;
    std::cout << "Total health: " <<  BoatFactory.calculateTotalHealthPerUnit() << std::endl;
    std::cout << "Total damage: " <<  BoatFactory.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total defense: " <<  BoatFactory.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout<<std::endl;

            std::cout <<"INFANTRY:"<<std::endl;
    InfantryFactory infantryFactory;
    Soldiers* soldier2 = infantryFactory.createUnit();
    Soldiers* attack = infantryFactory.createUnit();
    std::cout <<"---Stats per unit---" <<std::endl;
    std::cout << "Total health: " << infantryFactory.calculateTotalHealthPerUnit() << std::endl;
    std::cout << "Total damage: " << infantryFactory.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total defense: " << infantryFactory.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout<<std::endl;

            std::cout <<"SHIELDS:"<<std::endl;
    ShieldBearerFactory shieldFactory;
    Soldiers* soldier3 = shieldFactory.createUnit();
    Soldiers* shields = shieldFactory.createUnit();
    std::cout <<"---Stats per unit---" <<std::endl;
    std::cout << "Total health: " << shieldFactory.calculateTotalHealthPerUnit() << std::endl;
    std::cout << "Total damage: " << shieldFactory.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total defense: " << shieldFactory.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout<<std::endl;

    delete soldier1;
    delete soldier2;
    delete soldier3;
    delete boats;
    delete attack;
    delete shields;
}

void finalTest()
{
    std::cout << "<--------- MAIN TEST --------->" <<std::endl;
            std::cout <<"BOATS:"<<std::endl;
    BoatmanFactory BoatFactory;
    Soldiers* soldier1= BoatFactory.createUnit();
    Soldiers* boats= BoatFactory.createUnit();
    std::cout <<"---Stats per unit @ start---" <<std::endl;
    std::cout << "Total health: " <<  BoatFactory.calculateTotalHealthPerUnit() << std::endl;
    std::cout << "Total damage: " <<  BoatFactory.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total defense: " <<  BoatFactory.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<"--------------------"<<std::endl;
    soldier1->engage();
    soldier1->enemyAttack();
    Caretaker* KeanusCaretaker = new Caretaker();
    Memento* KeanusMemento = soldier1->militusMemento();
    KeanusCaretaker->AddMemento(KeanusMemento);
    std::cout << "Health = " << KeanusCaretaker->retrieveMemento("Boatman")->getHealth() << "\n";
    soldier1->enemyAttack();
    std::cout << "Health = " << soldier1->getHealth() << "\n";
    soldier1->reviveSoldier(KeanusCaretaker->retrieveMemento("Boatman"));
    std::cout << "Health = " << soldier1->getHealth() << "\n";
    soldier1->disengage();
    BoatFactory.setSoldiers(soldier1);
    std::cout <<"---Stats per unit @ end---" <<std::endl;
    std::cout << "Total health: " <<  BoatFactory.calculateTotalHealthPerUnit() << std::endl;
    std::cout << "Total damage: " <<  BoatFactory.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total defense: " <<  BoatFactory.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout<<std::endl;

            std::cout <<"INFANTRY:"<<std::endl;
    InfantryFactory infantryFactory;
    Soldiers* soldier2 = infantryFactory.createUnit();
    soldier2->engage();
    soldier2->disengage();
    Soldiers* attack = infantryFactory.createUnit();
    attack->engage();
    attack->disengage();
    std::cout <<"---Stats per unit---" <<std::endl;
    std::cout << "Total health: " << infantryFactory.calculateTotalHealthPerUnit() << std::endl;
    std::cout << "Total damage: " << infantryFactory.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total defense: " << infantryFactory.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout<<std::endl;

            std::cout <<"SHIELDS:"<<std::endl;
    ShieldBearerFactory shieldFactory;
    Soldiers* soldier3 = shieldFactory.createUnit();
    soldier3->engage();
    soldier3->disengage();
    Soldiers* shields = shieldFactory.createUnit();
    shields->engage();
    shields->disengage();
    std::cout <<"---Stats per unit---" <<std::endl;
    std::cout << "Total health: " << shieldFactory.calculateTotalHealthPerUnit() << std::endl;
    std::cout << "Total damage: " << shieldFactory.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total defense: " << shieldFactory.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout<<std::endl;

    delete soldier1;
    delete soldier2;
    delete soldier3;
    delete boats;
    delete attack;
    delete shields;
    delete KeanusMemento;
    delete KeanusCaretaker;
}

int main() {
    std::cout << "THE TINY ELEPHANTS" <<std::endl;
    std::cout << "u23562732 & u22893459" <<std::endl;
    std::cout << std::endl;
    testSoldiers();
    std::cout << std::endl;
    testFactories();
    std::cout << std::endl;
    testMemento();
    std::cout << std::endl;

    finalTest();
    

}