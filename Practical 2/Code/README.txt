TASK 1:UML
1.1)UML class diagram
-relationship between SoldierFactory and Soldiers = Aggregation[has-a] (Multiplicity 0..1)
-relationship between Factories,Soldiers = Generalisation[is-a]
-relationship between Soldiers+Memento=Dependency
-relationship between Caretaker+Memento=Aggregation

1.2)UML object Diagram
-infantryFactory of type InfantryFactory (uses createUnit() to instantiate new soldiers)
-soldier1 of type Infantry
(multiplicity 0..*)
-memento of type Memento (stores data of soldiers)
-caretaker of type Caretaker (stores data of memento)

-boatFactory of type BoatmanFactory (creates boatman unit)
-soldier2 of type Boatman
(multiplicity 0..*)

-shieldFactory of type ShieldBearerFactory (creates shieldbearer unit)
-soldier3 of type ShieldBearer
(multiplicity 0..*)


TASK 2:IMPLEMENTATION
1)Factory Method (uses Template Method)
-SoldierFactory = Creator = Abstract Base Class
-createUnit() = primitive operation
-InfantryFactory,BoatmanFactory,ShieldBearerFactory = ConcreteCreator classes ->create ConcreteProducts
-Soldiers = Product class = Abstract
-Infantry,Boatman,ShieldBearer = ConcreteProduct classes
-relationship between SoldierFactory and Soldiers = Aggregation[has-a] (Multiplicity 0..1)
-relationship between Factories,Soldiers = Generalisation[is-a]
What does it do?
The Factory method allows you to create multiple instances of objects of the same type, using subclasses.

2)Prototype
-Soldiers = Prototype = Abstract class-Infantry,ShieldBearer,Boatman = ConcretePrototype
-clonis() = create a copy of object;
-needs a copy constructor to copy current object values to a new object
What does it do?
Clones instances to create a new object with the same attributes

3)Template Method
-engage() = calls prepare()+execute()
-disengage() = calls retreat()+rest()
What does it do?
Defines structure for an algorithm in a function, using subclasses to produce different output using the same steps.

4)Memento
-Originator class = Soldiers
-Soldiers is a friend class as the Memento constructor to set its state is a private member that we need to access
-militusMemento() : Memento* = create memento
-vivificaMemento(mem : Memento*) = restores prev state
-relationship between Soldiers+Memento=Dependency
-relationship between Caretaker+Memento=Aggregation

