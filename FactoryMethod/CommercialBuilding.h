#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include "Building.h"

class CommercialBuilding : public Building {
public:
    CommercialBuilding() {
        buildingType = "Commercial Building";
    }

    void construct() override {
        std::cout << "Constructing a Commercial Building\n";
    }
};

#endif // COMMERCIALBUILDING_H
