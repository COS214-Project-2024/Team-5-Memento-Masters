
#ifndef MALL_H
#define MALL_H

#include "CommercialBuilding.h"

/**
 * @class Mall
 * @brief A class representing a mall
 */
class Mall: public CommercialBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the mall
     */
    Mall(int cost = 100000) : CommercialBuilding(cost, 100.0, 50.0) {}
    
    /**
     * @brief Destructor
     */
    ~Mall() = default;
};

#endif//MALL_H
