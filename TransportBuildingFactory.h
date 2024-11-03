
#include <string>
#include <vector>
using namespace std;

#ifndef TRANSPORTBUILDINGFACTORY_H
#define TRANSPORTBUILDINGFACTORY_H

#include "TransportBuildingFactory.h"
#include "BuildingFactory.h"
#include "Road.h"
#include "TrainStation.h"
#include "Airport.h"

class TransportBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes;

public: 
    TransportBuildingFactory();

    Building* createBuilding(string type);

    // ~TransportBuildingFactory();
};

#endif