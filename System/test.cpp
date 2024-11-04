#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>


void test1()
{
    // Lights *firstLight = new Lights();
    // firstLight->toggleOn();
    // firstLight->toggleOff();

    // SmartDevice *first = new Lights();
    // Command *firstCommand = new LightsOnCommand(new Lights());
    // firstCommand->execute();

    // MacroRoutine *routine = new MacroRoutine();

    // std::cout << std::endl
    //           << "Testing Routine:" << std::endl;
    // routine->addProcedure(new LightsOnCommand(new Lights()));
    // routine->addProcedure(new LightsOffCommand(new Lights()));
    // routine->addProcedure(new ThermoStatOffCommand(new ThermoStat()));
    // routine->addProcedure(new ThermoStatOnCommand(new ThermoStat()));
    // routine->addProcedure(new DoorsUnlockCommand(new Doors()));
    // routine->addProcedure(new DoorsLockCommand(new Doors()));
    // routine->addProcedure(new LegacyThermoStatOnCommand(new SmartThermoStatIntegrator(new LegacyThermoStat())));
    // routine->addProcedure(new LegacyThermoStatOffCommand(new SmartThermoStatIntegrator(new LegacyThermoStat())));
    // routine->execute();
    // std::cout << std::endl;

    // std::cout << "Testing sensor:" << std::endl;
    // std::string Action = "You are exiting a room";

    // Sensor *firstSensor = new Sensor();
    // firstSensor->addDevice(new Lights());
    // firstSensor->addDevice(new Doors());
    // firstSensor->addDevice(new ThermoStat());

    // firstSensor->notifyDevices(Action);
    // firstSensor->removeDevice(0);
    // firstSensor->removeDevice(0);
    // firstSensor->notifyDevices(Action);

    // std::vector<SmartDevice *> smartDeviceList;

    // smartDeviceList.push_back(new Doors());
    // smartDeviceList.push_back(new Lights());
    // smartDeviceList.push_back(new ThermoStat());
    // smartDeviceList.push_back(new SmartThermoStatIntegrator(new LegacyThermoStat()));

    // for (int i = 0; i < smartDeviceList.size(); i++)
    // {
    //     smartDeviceList.at(i)->performAction("on");
    //     smartDeviceList.at(i)->performAction("off");
    // }

    // SmartDevice *TEST = new SmartThermoStatIntegrator(new LegacyThermoStat());
    // TEST->getDeviceType();
    // TEST->getStatus();
    // TEST->performAction("on");
    // TEST->performAction("off");
    // TEST->notified("Test");
}



TEST_CASE("Testing GovernMent")
{
    // testSmartDevices();
}

TEST_CASE("Testing Citizens")
{
    // testCommands();
}

