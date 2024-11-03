
#ifndef MALL_H
#define MALL_H

#include "CommercialBuilding.h"

class Mall: public CommercialBuilding
{
public:
    Mall(int cost = 100000000);
        
    ~Mall() = default;
};

#endif//MALL_H