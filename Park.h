
#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"

class Park: public LandmarkBuilding
{
public:
    Park(int cost = 1000000);
        
    ~Park() = default;
};

#endif