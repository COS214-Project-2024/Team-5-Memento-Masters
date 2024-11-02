
#ifndef MALL_H
#define MALL_H

#include "CommercialBuilding.h"

class Mall: public CommercialBuilding
{
public:
    Mall(int cost = 1000000) : CommercialBuilding(cost, 100.0, 50.0) {}
        
    ~Mall() = default;
};

#endif//MALL_H
