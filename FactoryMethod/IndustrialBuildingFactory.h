
#include <string>
#include <vector>
using namespace std;

#ifndef INDUSTRIALBUILDINGFACTORY_H
#define INDUSTRIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Factory.h"
#include "PowerPlant.h"

class IndustrialBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes;

public: 
    IndustrialBuildingFactory() {
        validTypes = {"Factory", "PowerPlant"};
    }

    Building* createBuilding(string type) override {
        if (type == "Factory") return new Factory();
        if (type == "PowerPlant") return new PowerPlant();
        return nullptr;
    }

    
    ~IndustrialBuildingFactory() override = default;
};

#endif//INDUSTRIALBUILDINGFACTORY_H
