
#ifndef POWERPLANT_H
#define POWERPLANT_H

#include "IndustrialBuilding.h"

class PowerPlant: public IndustrialBuilding
{
public:
    PowerPlant(int cost = 200000) : IndustrialBuilding(cost, 100.0, 50.0) {}
        
    ~PowerPlant() = default;
};

#endif
