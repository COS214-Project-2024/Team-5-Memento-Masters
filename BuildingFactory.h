//FACTORY METHOD DESIGN PATTERN
// Abstract factory class

#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"

class BuildingFactory {
public:
    // virtual ~BuildingFactory() = 0;
    
    virtual Building* createBuilding(std::string type) = 0;
};

#endif // BUILDINGFACTORY_H

