//FACTORY METHOD DESIGN PATTERN
// Concrete Product 

using namespace std;

#include "IndustrialBuilding.h"

IndustrialBuilding::IndustrialBuilding(int cost, double prodRate, double resConsumption) : Building(cost, "Industrial"), productionRate(prodRate), resourceConsumption(resConsumption) {}
    
double IndustrialBuilding::updateProduction(double newProductionRate) {  
    productionRate = newProductionRate;
	return productionRate;
}

void IndustrialBuilding::setResourceConsumption(double newResourceConsumption) {
    resourceConsumption = newResourceConsumption;
}

double IndustrialBuilding::getProductionRate() const {
    return productionRate;
}

double IndustrialBuilding::getResourceConsumption() const {
    return resourceConsumption;
}

void IndustrialBuilding::construct() {
        std::cout << "Constructing a Commercial Building\n";   //for BuildCommand
}


