
#include <string>
#include <vector>
using namespace std;

#ifndef COMMERCIALBUILDINGFACTORY_H
#define COMMERCIALBUILDINGFACTORY_H

#include "BuildingFactory.h"
#include "Shop.h"
#include "Mall.h"
#include "Office.h"

class CommercialBuildingFactory: public BuildingFactory
{
private: 
    vector<string> validTypes;

public: 
    CommercialBuildingFactory() {
        validTypes = {"Shop", "Mall", "Office"};
    }

    Building* createBuilding(string type) override {
        if (type == "Shop") return new Shop();
        if (type == "Mall") return new Mall();
        if (type == "Office") return new Office();
        return nullptr;
    }
    
    ~CommercialBuildingFactory() override = default;
};

#endif //COMMERCIALBUILDINGFACTORY_H
