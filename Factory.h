
#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"

class Factory: public IndustrialBuilding
{
public:
    Factory(int cost = 1000000);
        
    ~Factory() = default;
};

#endif //FACTORY_H