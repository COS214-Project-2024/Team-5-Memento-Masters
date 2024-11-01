#ifndef RESIDENTIALBUILDINGFACTORY_H
#define RESIDENTIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "ResidentialBuilding.h"

// Factory to create residential buildings
class ResidentialBuildingFactory : public BuildingFactory {
public:
    Building* createBuilding() override {
        return new ResidentialBuilding();
    }
};

#endif // RESIDENTIALBUILDINGFACTORY_H
