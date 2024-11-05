
#ifndef HOUSE_H
#define HOUSE_H

#include "ResidentialBuilding.h"

/**
 * @class House
 * @brief Defines a house building
 * 
 * This class is a concrete product of the Factory Method design pattern.
 */
class House: public ResidentialBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the house
     */
    House(int cost = 10000) : ResidentialBuilding(cost, 100.0, 4) {}
        
    /**
     * @brief Destructor
     */
    ~House() = default;
};

#endif//HOUSE_H
