//FACTORY METHOD DESIGN PATTERN
// Concrete Factory

#include <string>
#include <vector>
using namespace std;

#include "IndustrialBuildingFactory.h"

IndustrialBuildingFactory::IndustrialBuildingFactory() {
        validTypes = {"Factory", "PowerPlant"};
    }

Building* IndustrialBuildingFactory::createBuilding(string type) {
        if (type == "Factory") return new Factory();
        if (type == "PowerPlant") return new PowerPlant();
        return NULL;
    }