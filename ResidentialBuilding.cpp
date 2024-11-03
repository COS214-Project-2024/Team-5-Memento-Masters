//FACTORY METHOD DESIGN PATTERN
// Concrete Product 

#include "ResidentialBuilding.h"

ResidentialBuilding::ResidentialBuilding(int cost, double resConsumption, int maxCap) : Building(cost, "Residential"), resourceComsumption(resConsumption), maxCapacity(maxCap), capacity(0) {}

// void ResidentialBuilding::updateResidence() {   //implement or remove completely!
// 	throw "Not yet implemented";
// }

int ResidentialBuilding::updateCapacity(int cap) {
    capacity = cap;
    return capacity;
}

int ResidentialBuilding::getCapacity() const {
    return capacity;
}

int ResidentialBuilding::getMaxCapacity() const {
    return maxCapacity;
}

double ResidentialBuilding::getResourceConsumption() const {
    return resourceComsumption;
}

void ResidentialBuilding::construct() {  //method for BuildCommand
        std::cout << "Constructing a Residential Building\n";
}
