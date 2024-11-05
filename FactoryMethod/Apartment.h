
#ifndef APARTMENT_H
#define APARTMENT_H

#include "ResidentialBuilding.h"

/**
 * @class Apartment
 * @brief Defines an apartment building
 * 
 * This class is a concrete product of the Factory Method design pattern.
 */
class Apartment: public ResidentialBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the apartment
     */
    Apartment(int cost = 100000) : ResidentialBuilding(cost, 100.0, 10) {}
    
    /**
     * @brief Destructor
     */
    ~Apartment() = default;
};

#endif //APARTMENT_H
