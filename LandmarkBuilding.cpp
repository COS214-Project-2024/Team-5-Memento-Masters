//FACTORY METHOD DESIGN PATTERN
// Concrete Product 

#include "LandmarkBuilding.h"

LandmarkBuilding::LandmarkBuilding(int cost, int entertainment) : Building(cost, "Landmark"), entertainmentValue(entertainment) {}

int LandmarkBuilding::updateEntertainment(int entertainmentVal){ 
    entertainmentValue = entertainmentVal;
    return entertainmentValue;             
}

int LandmarkBuilding::getEntertainmentValue() const {
    return entertainmentValue;
}

void LandmarkBuilding::setEntertainmnetValue(int newEntVal) {
    entertainmentValue = newEntVal;
}

void LandmarkBuilding::construct() {
        std::cout << "Constructing a Landmark Building\n";  //for BuildCommand
}
