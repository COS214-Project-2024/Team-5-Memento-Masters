
#include <string>
#include <vector>
using namespace std;

#ifndef INDUSTRIALBUILDINGFACTORY_H
#define INDUSTRIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Factory.h"
#include "PowerPlant.h"

/**
 * @class IndustrialBuildingFactory
 * @brief A factory for creating industrial buildings
 * 
 * This class is a concrete factory of the Factory Method design pattern.
 */
class IndustrialBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes; ///< Valid types of buildings that can be created.

public: 
    /**
     * @brief Constructor
     */
    IndustrialBuildingFactory() {
        validTypes = {"Factory", "PowerPlant"};
    }

    /**
     * @brief Creates a building of the specified type.
     * @param type The type of building to create.
     * @return A pointer to the newly created building.
     */
    Building* createBuilding(string type) override {
        if (type == "Factory") return new Factory();
        if (type == "PowerPlant") return new PowerPlant();
        return nullptr;
    }

    /**
     * @brief Destructor
     */
    ~IndustrialBuildingFactory() override = default;
};

#endif//INDUSTRIALBUILDINGFACTORY_H
