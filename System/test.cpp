#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Government.h"
#include "ConcreteGovernment.h"
#include "Citizen.h"
#include "Building.h"
#include "House.h"
#include "Shop.h"
#include "ResidentialBuilding.h"
#include "CommercialBuilding.h"
#include <iostream>

#include "Iterator.h"

void testGovernment()
{
    // Get the singleton instance
    // ConcreteGovernment *government = new ConcreteGovernment(100,23);
    ConcreteGovernment *government = ConcreteGovernment::instance();
    std::cout << "Government instance created." << std::endl;

    government->addCitizen(new Citizen(100000, 24), new House(59, 69), new Shop(123, 456));
    government->addCitizen(new Citizen(100000, 25), new House(60, 69), new Shop(124, 456));
    government->addCitizen(new Citizen(100000, 26), new House(61, 69), new Shop(125, 456));
    government->addCitizen(new Citizen(100000, 27), new House(62, 69), new Shop(126, 456));
    government->addCitizen(new Citizen(100000, 28), new House(63, 69), new Shop(127, 456));
    government->addCitizen(new Citizen(100000, 29), new House(64, 69), new Shop(128, 456));

    CHECK(government->getAverageAge() == 26);
    government->collectIncomeTax();
    CHECK(government->getTaxFundsCollected() == 72000);
    government->ageAll(2);
    CHECK(government->getAverageAge() == 28);
    government->collectPropertyTax();

    CHECK(government->getAverageSatisfaction() == 100);
    government->setIncomeTaxRate(0.65);
    CHECK(government->getAverageSatisfaction() == 90);

    CHECK(government->getPopulation()==6);
    government->eliminateCitizens(3);
    CHECK(government->getPopulation()==3);
   
    
    // CHECK(government->getTaxFundsCollected()==?);

    // Example usage of government instance
}

void testCitizen()
{
    Citizen *first = new Citizen(100, 56);
    CHECK(first->getAge() == 56);
    CHECK(first->getIncome() == 100);

    House *testHouse = new House(3, 6);
    Shop *testJob = new Shop(1, 2);
    first->assignHouse(testHouse);
    first->assignJob(testJob);
    CHECK(first->getHouse() == testHouse);
    CHECK(first->getJob() == testJob);

    CHECK(first->getSatisfaction() == 100);
    first->increaseAge(1);
    CHECK(first->getAge() == 57);
}

TEST_CASE("Phillip se testing")
{
    CommercialBuilding shop("Shop", 10, 20);

    // Initially in PlacedState
    CHECK(shop.getState()->getStateName() == "Placed");
    CHECK(shop.getRevenue() == 0); // 0

    // Transition to UnderConstructionState
    shop.getAndSetNextState();
    CHECK(shop.getState()->getStateName() == "Under Construction");

    // Transition to CompletedState
    shop.getAndSetNextState();
    CHECK(shop.getState()->getStateName() == "Complete");

    // Transition to DemolishedState and check resource consumption drops
    shop.getAndSetNextState();
    CHECK(shop.getState()->getStateName() == "Demolished");
    CHECK(shop.getCostConsumption() == 0);
    CHECK(shop.getPowerConsumption() == 0);
}

TEST_CASE("Testing Government")
{
    testGovernment();
}

TEST_CASE("Testing Citizens")
{
    testCitizen();
}
TEST_CASE("Iterator class functionality") {
    Iterator iterator;

    SUBCASE("Testing add and get") {
        auto* house = new ResidentialBuilding("House", 100, 100);
        iterator.add(house, 5, 5);
        CHECK(iterator.get(5, 5) == house);
    }

    SUBCASE("Testing clear and get") {
        iterator.clear();
        CHECK(iterator.get(5, 5) == nullptr);
    }

    SUBCASE("Testing current and first") {
        auto* house = new ResidentialBuilding("House", 100, 100);
        iterator.add(house, 0, 0);
        CHECK(iterator.first() == house);
        CHECK(iterator.current() == house);
    }

    SUBCASE("Testing lengthX and lengthY") {
        CHECK(iterator.lengthX() == 50);
        CHECK(iterator.lengthY() == 50);
    }

    SUBCASE("Testing hasNextX and hasNextY") {
        auto* house = new ResidentialBuilding("House", 100, 100);
        auto* house2 = new ResidentialBuilding("House", 100, 100);

        iterator.add(house, 1, 0);
        CHECK(iterator.hasNextX() == true);

        iterator.add(house2, 0, 1);
        CHECK(iterator.hasNextY() == true);
    }

    SUBCASE("Testing next and reset") {
        iterator.reset();
        auto* house = new ResidentialBuilding("House", 100, 100);
        iterator.add(house, 0, 0);
        iterator.add(new ResidentialBuilding("House", 100, 100), 1, 0);
        
        iterator.reset();
        CHECK(iterator.next() == iterator.get(1, 0));
        iterator.reset();
    }

    SUBCASE("Testing previous") {
        auto* house = new ResidentialBuilding("House", 100, 100);
        iterator.add(house, 0, 0);
        iterator.add(new ResidentialBuilding("House", 100, 100), 1, 0);
        iterator.next();
        CHECK(iterator.previous() == house);
    }

    SUBCASE("Testing remove") {
        auto* house = new ResidentialBuilding("House", 100, 100);
        iterator.add(house, 3, 3);
        CHECK(iterator.remove(3, 3) == true);
        CHECK(iterator.get(3, 3) == nullptr);
    }

    SUBCASE("Testing slotAvailable") {
        auto* house = new ResidentialBuilding("House", 100, 100);
        iterator.add(house, 2, 2);
        CHECK(iterator.slotAvailable(2, 2) == false);
        CHECK(iterator.slotAvailable(3, 3) == true);
    }

    /*SUBCASE("Testing getHouse") {
        auto* house = new ResidentialBuilding("House", 100, 100);
        Iterator* testIt = new Iterator();
        testIt->add(house, 4, 4);
        CHECK(testIt->getHouse() == house);
    }

    SUBCASE("Testing getJob") {
        auto* shop = new CommercialBuilding("Shop", 200, 200);
        iterator.add(shop, 6, 6);
        CHECK(iterator.getJob() == shop);
    }*/
}