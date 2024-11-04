
using namespace std;

#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include "Building.h"

class ResidentialBuilding: public Building
{
private: 
    double resourceComsumption;
	int maxCapacity;
	int capacity;

public: 
    ResidentialBuilding(int cost, double resConsumption = 0.0, int maxCap = 0) : Building(cost, "Residential"), resourceComsumption(resConsumption), maxCapacity(maxCap), capacity(0) {}

    void updateResidence();

    virtual ~ResidentialBuilding() = default;
};

#endif //ResidentialBuilding(cost:int, resConsumption:double, maxCap:int) : Building(cost, "Residential")
