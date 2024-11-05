
#include <string>
#include <vector>
using namespace std;

#ifndef LANDMARKBUILDINGFACTORY_H
#define LANDMARKBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Park.h"
#include "Monument.h"

/**
 * @class LandmarkBuildingFactory
 * @brief A factory for creating landmark buildings
 * 
 * This class is a concrete factory of the Factory Method design pattern.
 */
class LandmarkBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes; ///< Valid types of buildings that can be created.

public: 
    /**
     * @brief Constructor
     */
    LandmarkBuildingFactory() {
        validTypes = {"Park", "Monument"};
    }

    /**
     * @brief Creates a building of the specified type.
     * @param type The type of building to create.
     * @return A pointer to the newly created building.
     */
    Building* createBuilding(string type) override {
        if (type == "Park") return new Park();
        if (type == "Monument") return new Monument();
        return nullptr;
    }

    /**
     * @brief Destructor
     */
    ~LandmarkBuildingFactory() override = default;
};

#endif //LANDMARKBUILDINGFACTORY_H
