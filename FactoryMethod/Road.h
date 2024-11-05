
#ifndef ROAD_H
#define ROAD_H

#include "TransportBuilding.h"

/**
 * @class Road
 * @brief A class representing a road
 */
class Road: public TransportBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the road
     */
    Road(int cost = 10000) : TransportBuilding(cost, 100) {}
    
    /**
     * @brief Destructor
     */
    ~Road() = default;
};

#endif
