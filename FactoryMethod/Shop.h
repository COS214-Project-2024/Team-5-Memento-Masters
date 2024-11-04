
#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"

class Shop: public CommercialBuilding
{
public:
    Shop(int cost = 50000) : CommercialBuilding(cost, 100.0, 50.0) {}
        
    ~Shop() = default;
};

#endif
