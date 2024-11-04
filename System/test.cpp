#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Government.h"
#include "ConcreteGovernment.h"
#include "Citizen.h"
#include "Building.h"
#include "House.h"
#include "Shop.h"
#include <iostream>

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
    government->increaseCitizenAge(2);
    CHECK(government->getAverageAge() == 28);
    government->collectPropertyTax();

    CHECK(government->getAverageSatisfaction() == 100);
    government->setIncomeTaxRate(0.65);
    CHECK(government->getAverageSatisfaction() == 90);
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