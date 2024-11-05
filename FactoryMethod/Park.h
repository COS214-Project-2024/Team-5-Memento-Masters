
#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"

/**
 * @class Park
 * @brief A class representing a park
 */
class Park: public LandmarkBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the park
     */
    Park(int cost = 15000) : LandmarkBuilding(cost, 100) {}
    
    /**
     * @brief Destructor
     */
    ~Park() = default;
};

#endif
