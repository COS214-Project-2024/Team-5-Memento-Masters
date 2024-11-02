
using namespace std;

#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

#include "Building.h"

class LandmarkBuilding: public Building
{
private: 
    int entertainmentValue;

public: 
    LandmarkBuilding(int cost, int entertainment = 0) : Building(cost, "Landmark"), entertainmentValue(entertainment) {}

    void updateEntertainment();
    
    virtual ~LandmarkBuilding() = default;
};

#endif //LANDMARKBUILDING_H LandmarkBuilding(cost:int, entertainment:int)
