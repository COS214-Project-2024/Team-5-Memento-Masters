//FACTORY METHOD DESIGN PATTERN
#include <string>
#include <vector>
using namespace std;

#ifndef RESIDENTIALBUILDINGFACTORY_H
#define RESIDENTIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "House.h"
#include "Apartment.h"

class ResidentialBuildingFactory: public BuildingFactory
{
public: 
    ResidentialBuildingFactory();

    Building* createBuilding(string type);
    
    // ~ResidentialBuildingFactory();

private: 
    vector<string> validTypes;
};

#endif  //RESIDENTIALBUILDINGFACTORY_H
