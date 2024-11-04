
#include <string>
#include <vector>
using namespace std;

#ifndef LANDMARKBUILDINGFACTORY_H
#define LANDMARKBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Park.h"
#include "Monument.h"

class LandmarkBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes;

public: 
    LandmarkBuildingFactory() {
        validTypes = {"Park", "Monument"};
    }

    Building* createBuilding(string type) override {
        if (type == "Park") return new Park();
        if (type == "Monument") return new Monument();
        return nullptr;
    }

    
    ~LandmarkBuildingFactory() override = default;
};

#endif //LANDMARKBUILDINGFACTORY_H
