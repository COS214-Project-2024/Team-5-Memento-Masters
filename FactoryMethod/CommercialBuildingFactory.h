
#include <string>
#include <vector>
using namespace std;

#ifndef COMMERCIALBUILDINGFACTORY_H
#define COMMERCIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Shop.h"
#include "Mall.h"
#include "Office.h"

/**
 * @class CommercialBuildingFactory
 * @brief A factory for creating commercial buildings
 * 
 * This class is a concrete factory of the Factory Method design pattern.
 */
class CommercialBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes; ///< Valid types of buildings that can be created.

public: 
    /**
     * @brief Constructor
     */
    CommercialBuildingFactory() {
        validTypes = {"Shop", "Mall", "Office"};
    }

    /**
     * @brief Creates a building of the specified type.
     * @param type The type of building to create.
     * @return A pointer to the newly created building.
     */
    Building* createBuilding(string type) override {
        if (type == "Shop") return new Shop();
        if (type == "Mall") return new Mall();
        if (type == "Office") return new Office();
        return nullptr;
    }
    
    /**
     * @brief Destructor
     */
    ~CommercialBuildingFactory() override = default;
};

#endif //COMMERCIALBUILDINGFACTORY_H
