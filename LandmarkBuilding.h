//FACTORY METHOD DESIGN PATTERN
using namespace std;

#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

#include <iostream>
#include "Building.h"

class LandmarkBuilding: public Building
{
public: 
    LandmarkBuilding(int cost, int entertainment = 0);

    int updateEntertainment(int);

    int getEntertainmentValue() const;

    void setEntertainmnetValue(int newEntVal);

    void construct(); //BuildCommand
    
    virtual ~LandmarkBuilding() = default;

private: 
    int entertainmentValue;
};

#endif //LANDMARKBUILDING_H LandmarkBuilding(cost:int, entertainment:int)
