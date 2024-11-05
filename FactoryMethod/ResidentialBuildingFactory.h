
#include <string>
#include <vector>
using namespace std;

#ifndef RESIDENTIALBUILDINGFACTORY_H
#define RESIDENTIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "House.h"
#include "Apartment.h"

/**
 * @class ResidentialBuildingFactory
 * @brief A factory for creating residential buildings
 * 
 * This class is a concrete factory of the Factory Method design pattern.
 */
class ResidentialBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes; ///< Valid types of buildings that can be created.

public: 
    /**
     * @brief Constructor
     */
    ResidentialBuildingFactory() {
        validTypes = {"House", "Apartment"};
    }

    /**
     * @brief Creates a building of the specified type.
     * @param type The type of building to create.
     * @return A pointer to the newly created building.
     */
    Building* createBuilding(string type) override {
        if (type == "House") return new House();
        if (type == "Apartment") return new Apartment();
        return nullptr;
    }

    /**
     * @brief Destructor
     */
    ~ResidentialBuildingFactory() override = default;
};

#endif
