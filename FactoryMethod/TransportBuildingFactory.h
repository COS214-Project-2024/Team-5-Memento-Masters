
#include <string>
#include <vector>
using namespace std;

#ifndef TRANSPORTBUILDINGFACTORY_H
#define TRANSPORTBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Road.h"
#include "TrainStation.h"
#include "Airport.h"

/**
 * @class TransportBuildingFactory
 * @brief A factory for creating transport buildings
 * 
 * This class is a concrete factory of the Factory Method design pattern.
 */
class TransportBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes; ///< Valid types of buildings that can be created.

public: 
    /**
     * @brief Constructor
     */
    TransportBuildingFactory() {
        validTypes = {"Road", "TrainStation", "Airport"};
    }

    /**
     * @brief Creates a building of the specified type.
     * @param type The type of building to create.
     * @return A pointer to the newly created building.
     */
    Building* createBuilding(string type) override {
        if (type == "Road") return new Road();
        if (type == "TrainStation") return new TrainStation();
        if (type == "Airport") return new Airport();
        return nullptr;
    }

    /**
     * @brief Destructor
     */
    ~TransportBuildingFactory() override = default;
};

#endif
