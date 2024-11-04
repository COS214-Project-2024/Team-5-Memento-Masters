
using namespace std;

#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

#include "Building.h"

class IndustrialBuilding: public Building
{
private: 
    double productionRate;
	double resourceConsumption;

public: 
    IndustrialBuilding(int cost, double prodRate = 0.0, double resConsumption = 0.0) : Building(cost, "Industrial"), productionRate(prodRate), resourceConsumption(resConsumption) {}
    
    void updateProduction();

    virtual ~IndustrialBuilding() = default;
};

#endif//INDUSTRIALBUILDING_H IndustrialBuilding(cost:int, prodRate:double, resConsumption:double)
