#include <iostream>
#include "Government.h"
#include "ConcreteGovernment.h"
#include "CitizenPrototype.h"
#include "Observer.h"

int main()
{
    // std::cout<<"Awe"<<std::endl;
    ConcreteGovernment* government = ConcreteGovernment::instance();
}