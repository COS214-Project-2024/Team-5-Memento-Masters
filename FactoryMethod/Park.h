
#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"

class Park: public LandmarkBuilding
{
public:
    Park(int cost = 15000) : LandmarkBuilding(cost, 100) {}
        
    ~Park() = default;
};

#endif
