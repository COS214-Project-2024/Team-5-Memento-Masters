//FACTORY METHOD DESIGN PATTERN

#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include <iostream>
using namespace std;
#include "Building.h"

class ResidentialBuilding: public Building
{
public: 
    ResidentialBuilding(int cost = 0, double resConsumption = 0.0, int maxCap = 0);

    // void updateResidence();

    int updateCapacity(int cap);

    int getCapacity() const;

    int getMaxCapacity() const;

    double getResourceConsumption() const;

    void construct();

    virtual ~ResidentialBuilding() = default;

private: 
    double resourceComsumption;
	int maxCapacity;
	int capacity;
};

#endif //ResidentialBuilding(cost:int, resConsumption:double, maxCap:int) : Building(cost, "Residential")
