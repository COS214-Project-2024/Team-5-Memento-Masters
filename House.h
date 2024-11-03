
#ifndef HOUSE_H
#define HOUSE_H

#include "ResidentialBuilding.h"

class House: public ResidentialBuilding
{
public:
    House(int cost = 1000000);
        
    ~House() = default;
};

#endif//HOUSE_H