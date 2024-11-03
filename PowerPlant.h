
#ifndef POWERPLANT_H
#define POWERPLANT_H

#include "IndustrialBuilding.h"

class PowerPlant: public IndustrialBuilding
{
public:
    PowerPlant(int cost = 1000000);
        
    ~PowerPlant() = default;
};

#endif