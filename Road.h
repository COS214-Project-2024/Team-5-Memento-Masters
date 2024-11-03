
#ifndef ROAD_H
#define ROAD_H

#include "TransportBuilding.h"

class Road: public TransportBuilding
{
public:
    Road(int cost = 1000000) : TransportBuilding(cost, 100) {}
        
    ~Road() = default;
};

#endif