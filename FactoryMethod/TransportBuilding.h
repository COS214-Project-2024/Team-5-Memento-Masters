#include <exception>
using namespace std;

#ifndef TRANSPORTBUILDING_H
#define TRANSPORTBUILDING_H

#include "Building.h"

/**
 * @class TransportBuilding
 * @brief A class representing a transport building
 */
class TransportBuilding: public Building
{
private: 
    int efficiencyValue; ///< The efficiency value of the building

public:
    /**
     * @brief Constructor
     * @param cost The cost of the transport building
     * @param effVal The efficiency value of the building
     */
    TransportBuilding(int cost, int effVal = 0) : Building(cost, "Transport"), efficiencyValue(effVal) {}

    /**
     * @brief Gets the efficiency value of the building
     * @return The efficiency value of the building
     */
    void updateEfficiency();

    /**
     * @brief Destructor
     */
    virtual ~TransportBuilding() = default;
};

#endif //TransportBuilding(cost:int, effVal:int)
