
#include <string>
#include <vector>
using namespace std;

#ifndef TRANSPORTBUILDINGFACTORY_H
#define TRANSPORTBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Road.h"
#include "TrainStation.h"
#include "Airport.h"

class TransportBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes;

public: 
    TransportBuildingFactory() {
        validTypes = {"Road", "TrainStation", "Airport"};
    }

    Building* createBuilding(string type) override {
        if (type == "Road") return new Road();
        if (type == "TrainStation") return new TrainStation();
        if (type == "Airport") return new Airport();
        return nullptr;
    }

    ~TransportBuildingFactory() override = default;
};

#endif
