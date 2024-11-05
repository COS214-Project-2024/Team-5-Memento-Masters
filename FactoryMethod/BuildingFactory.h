
#include <string>
using namespace std;

#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"

/**
 * @class BuildingFactory
 * @brief Abstract base class for building factories.
 */
class BuildingFactory
{
public: 
    /**
     * @brief Constructor
     */
    BuildingFactory() = default;

    /**
     * @brief Creates a building of the specified type.
     * @param type The type of building to create.
     * @return A pointer to the newly created building.
     */
    virtual Building* createBuilding(string type) = 0;

    /**
     * @brief Destructor
     */
    virtual ~BuildingFactory() = default;
};

#endif //BUILDINGFACTORY_H
