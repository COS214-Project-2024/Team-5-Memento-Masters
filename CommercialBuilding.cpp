//FACTORY METHOD DESIGN PATTERN
// Concrete Product 

#include "CommercialBuilding.h"

CommercialBuilding::CommercialBuilding(int cost, double rev, double resConsumption)
    : Building(cost, "Commercial"), revenue(rev), resourceConsumption(resConsumption) {}


double CommercialBuilding::getRevenue() const{
    return revenue;
}

void CommercialBuilding::setRevenue(double newRevenue) {
    revenue = newRevenue;
}

// double CommercialBuilding::calculateRevenue() {  /IMPLEMENT!!
//    
// }

void CommercialBuilding::construct() {
        std::cout << "Constructing a Commercial Building\n";
}
