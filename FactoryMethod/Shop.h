
#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"

/**
 * @class Shop
 * @brief A class representing a shop
 */
class Shop: public CommercialBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the shop
     */
    Shop(int cost = 50000) : CommercialBuilding(cost, 100.0, 50.0) {}
    
    /**
     * @brief Destructor
     */
    ~Shop() = default;
};

#endif
