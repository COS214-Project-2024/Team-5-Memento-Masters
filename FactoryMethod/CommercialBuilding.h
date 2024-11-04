
using namespace std;

#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include "Building.h"

class CommercialBuilding: public Building
{
private: 
    double revenue;
    double resourceComsumption;

public: 
    CommercialBuilding(int cost, double rev = 0.0, double resConsumption = 0.0) : Building(cost, "Industrial"), revenue(rev), resourceComsumption(resConsumption) {}

    void calculateRevenue();

    virtual ~CommercialBuilding() = default;
};

#endif //COMMERCIALBUILDING_H
