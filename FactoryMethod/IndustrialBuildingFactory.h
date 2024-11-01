#ifndef INDUSTRIALBUILDINGFACTORY_H
#define INDUSTRIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "IndustrialBuilding.h"

// Factory to create industrial buildings
class IndustrialBuildingFactory : public BuildingFactory {
public:
    Building* createBuilding() override {
        return new IndustrialBuilding();
    }
};

#endif // INDUSTRIALBUILDINGFACTORY_H
