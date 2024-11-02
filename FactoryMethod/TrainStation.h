
#ifndef TRAINSTATION_H
#define TRAINSTATION_H

#include "TransportBuilding.h"

class TrainStation: public TransportBuilding
{
public:
    TrainStation(int cost = 1000000) : TransportBuilding(cost, 100) {}
        
    ~TrainStation() = default;
};

#endif