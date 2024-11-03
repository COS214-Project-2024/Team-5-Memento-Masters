
#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"

class Shop: public CommercialBuilding
{
public:
    Shop(int cost = 10000);
        
    ~Shop() = default;
};

#endif