
#ifndef MONUMENT_H
#define MONUMENT_H

#include "LandmarkBuilding.h"

class Monument: public LandmarkBuilding
{
public:
    Monument(int cost = 1000000) : LandmarkBuilding(cost, 100) {}
        
    ~Monument() = default;
};

#endif//MONUMENT_H