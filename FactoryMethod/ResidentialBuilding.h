
using namespace std;

#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include "Building.h"

/**
 * @class ResidentialBuilding
 * @brief A class representing a residential building
 */
class ResidentialBuilding: public Building
{
private: 
    double resourceComsumption; ///< The amount of resources consumed by the building
	int maxCapacity; ///< The maximum capacity of the building
	int capacity; ///< The current capacity of the building

public: 
    /**
     * @brief Constructor
     * @param cost The cost of the residential building
     * @param resConsumption The amount of resources consumed by the building
     * @param maxCap The maximum capacity of the building
     */
    ResidentialBuilding(int cost, double resConsumption = 0.0, int maxCap = 0) : Building(cost, "Residential"), resourceComsumption(resConsumption), maxCapacity(maxCap), capacity(0) {}

    /**
     * @brief Gets the amount of resources consumed by the building
     * @return The amount of resources consumed by the building
     */
    void updateResidence();

    /**
     * @brief Destructor
     */
    virtual ~ResidentialBuilding() = default;
};

#endif //ResidentialBuilding(cost:int, resConsumption:double, maxCap:int) : Building(cost, "Residential")
