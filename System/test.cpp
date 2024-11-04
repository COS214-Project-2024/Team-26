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

    government->getAverageAge();

    // Example usage of government instance
}




void testCitizen()
{
    Citizen *first = new Citizen(100, 56);
    CHECK(first->getAge()==56);
    CHECK(first->getIncome()==100);

    House*testHouse=new House(3,6);
    Shop*testJob=new Shop(1,2);
    first->assignHouse(testHouse);
    first->assignJob(testJob);
    CHECK(first->getHouse()==testHouse);
    CHECK(first->getJob()==testJob);

}


TEST_CASE("Phillip se testing")
{
    CommercialBuilding shop("Shop", 10, 20);

    // Initially in PlacedState
    CHECK(shop.getState()->getStateName() == "Placed");
    CHECK(shop.getRevenue() == 0);  //0

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





TEST_CASE("Testing GovernMent")
{
    testGovernment();
}

TEST_CASE("Testing Citizens")
{
    // testCommands();
    testCitizen();
}