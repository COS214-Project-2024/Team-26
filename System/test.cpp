#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Government.h"
#include "ConcreteGovernment.h"
#include "Citizen.h"
#include "Building.h"
#include <iostream>


void testGovernment()
{
    // Get the singleton instance
    // ConcreteGovernment *government = new ConcreteGovernment(100,23);
    Citizen*firts=new Citizen(100,56);

    // government->getAverageAge();
    
    // Example usage of government instance
    std::cout << "Government instance created." << std::endl;

}

TEST_CASE("Testing GovernMent")
{
    testGovernment();
}

TEST_CASE("Testing Citizens")
{
    // testCommands();
}

