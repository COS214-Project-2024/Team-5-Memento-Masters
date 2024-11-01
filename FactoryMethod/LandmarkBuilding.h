#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

#include "Building.h"

class LandmarkBuilding : public Building {
public:
    LandmarkBuilding() {
        buildingType = "Landmark Building";
    }

    void construct() override {
        std::cout << "Constructing a Landmark Building\n";
    }
};

#endif // LANDMARKBUILDING_H
