
#include <string>
using namespace std;

#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"

class BuildingFactory
{
public: 
    BuildingFactory() = default;
    virtual Building* createBuilding(string type) = 0;
    virtual ~BuildingFactory() = default;
};

#endif //BUILDINGFACTORY_H
