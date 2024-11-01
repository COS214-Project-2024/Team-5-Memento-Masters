#include "City.h"
#include <iostream>

City::City() : taxRate(0.0), buildings(0) {}

void City::adjustTax(float newTaxRate)
{
    taxRate = newTaxRate;
    std::cout << "Tax rate adjusted to: " << taxRate << std::endl;
}

void City::build(const std::string &buildingType)
{
    // invoke the Factory Method design pattern to build the actual specified building
    buildings++;
    std::cout << "Built a new " << buildingType << ". Total buildings: " << buildings << std::endl;
}

float City::getTaxRate() const
{
    return taxRate;
}

int City::getBuildings() const
{
    return buildings;
}

void City::removeBuilding()
{
    buildings--;
}
