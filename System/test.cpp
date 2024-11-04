#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Government.h"
#include "ConcreteGovernment.h"
#include "Citizen.h"
#include "Building.h"
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

    government->getAverageAge();

    // Example usage of government instance
}

void testCitizen()
{
    Citizen *firts = new Citizen(100, 56);
    CHECK(firts->getAge()==56);
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