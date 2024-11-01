#ifndef LANDMARKBUILDINGFACTORY_H
#define LANDMARKBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "LandmarkBuilding.h"

// Factory to create landmark buildings
class LandmarkBuildingFactory : public BuildingFactory {
public:
    Building* createBuilding() override {
        return new LandmarkBuilding();
    }
};

#endif // LANDMARKBUILDINGFACTORY_H
