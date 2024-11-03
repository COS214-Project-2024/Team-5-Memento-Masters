//FACTORY METHOD DESIGN PATTERN

#include <string>
#include <vector>
using namespace std;

#include "LandmarkBuildingFactory.h"

LandmarkBuildingFactory::LandmarkBuildingFactory() {
        validTypes = {"Park", "Monument"};
    }

Building* LandmarkBuildingFactory::createBuilding(string type) {
        if (type == "Park") return new Park();
        if (type == "Monument") return new Monument();
        return NULL;
    }

