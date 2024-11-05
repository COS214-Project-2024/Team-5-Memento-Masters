
#ifndef POWERPLANT_H
#define POWERPLANT_H

#include "IndustrialBuilding.h"

/**
 * @class PowerPlant
 * @brief A class representing a power plant
 */
class PowerPlant: public IndustrialBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the power plant
     */
    PowerPlant(int cost = 200000) : IndustrialBuilding(cost, 100.0, 50.0) {}
    
    /**
     * @brief Destructor
     */
    ~PowerPlant() = default;
};

#endif
