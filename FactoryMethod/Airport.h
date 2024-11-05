
#ifndef AIRPORT_H
#define AIRPORT_H

#include "TransportBuilding.h"

/**
 * @class Airport
 * @brief Defines an airport building
 * 
 * This class is a concrete product of the Factory Method design pattern.
 */
class Airport: public TransportBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the airport
     */
    Airport(int cost = 1000000) : TransportBuilding(cost, 100) {}
        
    /**
     * @brief Destructor
     */
    ~Airport() = default;
};

#endif //AIRPORT_H  
