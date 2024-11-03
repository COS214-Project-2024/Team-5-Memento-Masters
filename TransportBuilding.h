//FACTORY METHOD DESIGN PATTER

#ifndef TRANSPORTBUILDING_H
#define TRANSPORTBUILDING_H

#include <iostream>
using namespace std;
#include "Building.h"

class TransportBuilding: public Building
{
public:
    TransportBuilding(int cost, int effVal = 0);

    int updateEfficiency(int eff);

    void construct();   //for BuildCommand

    int getEfficiencyValue() const;

    virtual ~TransportBuilding() = default;

private: 
    int efficiencyValue;
};

#endif //TransportBuilding(cost:int, effVal:int)

