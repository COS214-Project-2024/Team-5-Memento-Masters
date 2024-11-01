#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

#include "Building.h"

class IndustrialBuilding : public Building {
public:
    IndustrialBuilding() {
        buildingType = "Industrial Building";
    }

    void construct() override {
        std::cout << "Constructing an Industrial Building\n";
    }
};

#endif // INDUSTRIALBUILDING_H
