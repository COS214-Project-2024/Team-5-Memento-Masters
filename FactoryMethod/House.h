
#ifndef HOUSE_H
#define HOUSE_H

#include "ResidentialBuilding.h"

class House: public ResidentialBuilding
{
public:
    House(int cost = 10000) : ResidentialBuilding(cost, 100.0, 4) {}
        
    ~House() = default;
};

#endif//HOUSE_H
