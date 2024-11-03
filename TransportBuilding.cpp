//FACTORY METHOD DESIGN PATTERN
// Concrete Product 

#include "TransportBuilding.h"

TransportBuilding::TransportBuilding(int cost, int effVal) : Building(cost, "Transport"), efficiencyValue(effVal) {}

int TransportBuilding::updateEfficiency(int eff) { 
	efficiencyValue = eff;
    return efficiencyValue;
}

void TransportBuilding::construct() {  //method for BuildCommand
        std::cout << "Constructing a Residential Building\n";
}

int TransportBuilding::getEfficiencyValue() const {
    return efficiencyValue;
}