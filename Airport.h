
#ifndef AIRPORT_H
#define AIRPORT_H

#include "TransportBuilding.h"

class Airport: public TransportBuilding
{
public:
    Airport(int cost = 1000000);
        
    ~Airport() = default;
};

#endif //AIRPORT_H  