#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"

// Abstract factory class
class BuildingFactory {
public:
    virtual ~BuildingFactory() = default;
    
    // Factory method to create a building
    virtual Building* createBuilding() = 0;
};

#endif // BUILDINGFACTORY_H
