
#ifndef MONUMENT_H
#define MONUMENT_H

#include "LandmarkBuilding.h"

/**
 * @class Monument
 * @brief A class representing a monument
 */
class Monument: public LandmarkBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the monument
     */
    Monument(int cost = 1000000) : LandmarkBuilding(cost, 100) {}
    
    /**
     * @brief Destructor
     */
    ~Monument() = default;
};

#endif//MONUMENT_H
