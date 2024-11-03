// FACTORY METHOD DESIGN PATTERN
#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

#include <iostream>
#include "Building.h"

class IndustrialBuilding: public Building
{
public: 
    IndustrialBuilding(int cost, double prodRate = 0.0, double resConsumption = 0.0);

    double updateProduction(double newProductionRate);

    void setResourceConsumption(double newResourceConsumption);

    double getProductionRate() const;

    double getResourceConsumption() const;
    
    void construct();

    virtual ~IndustrialBuilding() = default;


private: 
    double productionRate;
	double resourceConsumption;
};

#endif//INDUSTRIALBUILDING_H IndustrialBuilding(cost:int, prodRate:double, resConsumption:double)