#include <exception>
using namespace std;

#ifndef TRANSPORTBUILDING_H
#define TRANSPORTBUILDING_H

#include "Building.h"

class TransportBuilding: public Building
{
private: 
    int efficiencyValue;

public:
    TransportBuilding(int cost, int effVal = 0) : Building(cost, "Transport"), efficiencyValue(effVal) {}

    void updateEfficiency();

    virtual ~TransportBuilding() = default;
};

#endif //TransportBuilding(cost:int, effVal:int)
