
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
private: 
    vector<string> validTypes;

public: 
    ResidentialBuildingFactory() {
        validTypes = {"House", "Apartment"};
    }

    Building* createBuilding(string type) override {
        if (type == "House") return new House();
        if (type == "Apartment") return new Apartment();
        return nullptr;
    }

    
    ~ResidentialBuildingFactory() override = default;
};

#endif
