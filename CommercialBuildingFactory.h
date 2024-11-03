#include <string>
#include <vector>
#include <iostream>
using namespace std;

#ifndef COMMERCIALBUILDINGFACTORY_H
#define COMMERCIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Shop.h"
#include "Mall.h"
#include "Office.h"

class CommercialBuildingFactory: public BuildingFactory
{

public: 
    CommercialBuildingFactory();

    Building* createBuilding(string type);
    
    // ~CommercialBuildingFactory();

private: 
    vector<string> validTypes;
};

#endif //COMMERCIALBUILDINGFACTORY_H
