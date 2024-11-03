//FACTORY METHOD DESIGN PATTERN
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
public: 
    IndustrialBuildingFactory();

    Building* createBuilding(string type);
    
    // ~IndustrialBuildingFactory() override = default;

private: 
    vector<string> validTypes;
};

#endif//INDUSTRIALBUILDINGFACTORY_H