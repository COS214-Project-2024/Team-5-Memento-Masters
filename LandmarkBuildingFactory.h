//FACTORY METHOD DESIGN PATTERN
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
    LandmarkBuildingFactory();

    Building* createBuilding(string type);

    // ~LandmarkBuildingFactory();
};

#endif //LANDMARKBUILDINGFACTORY_H
