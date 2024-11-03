//FACTORY METHOD DESIGN PATTERN
//Abstract product
#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include "Building.h"
#include <iostream>

class CommercialBuilding : public Building {
public:
    CommercialBuilding(int cost = 0, double rev = 0.0, double resConsumption = 0.0);

    // double calculateRevenue();  //IMPLEMENT!!

    double getRevenue() const;

    void setRevenue(double newRevenue);

    void construct();  //for BuildCommand
    
    virtual ~CommercialBuilding() = default;

private: 
    double revenue;
    double resourceConsumption;
};

#endif // COMMERCIALBUILDING_H


