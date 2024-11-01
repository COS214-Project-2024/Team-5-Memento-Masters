#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include "Building.h"

class ResidentialBuilding : public Building {
public:
    ResidentialBuilding() {
        buildingType = "Residential Building";
    }

    void construct() override {
        std::cout << "Constructing a Residential Building\n";
    }
};

#endif // RESIDENTIALBUILDING_H
