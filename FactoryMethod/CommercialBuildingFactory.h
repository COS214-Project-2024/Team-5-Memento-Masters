#ifndef COMMERCIALBUILDINGFACTORY_H
#define COMMERCIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "CommercialBuilding.h"

// Factory to create commercial buildings
class CommercialBuildingFactory : public BuildingFactory {
public:
    Building* createBuilding() override {
        return new CommercialBuilding();
    }
};

#endif // COMMERCIALBUILDINGFACTORY_H
