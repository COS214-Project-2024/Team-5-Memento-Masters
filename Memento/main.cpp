#include <iostream>
#include "City.h"
#include "CityCaretaker.h"

int main() {
    City city;
    CityCaretaker caretaker;

    // Initial setup
    std::cout << "=== Initial City State (Year " << City::currentYear << ") ===" << std::endl;
    
    // Set initial tax rates
    city.setIncomeTaxRate(0.10);
    city.setSalesTaxRate(0.05);
    city.setPropertyTaxRate(0.02);
    
    // Create initial state memento with non-zero values
    CityMemento* initialState = new CityMemento(
        0.10,    // incomeTaxRate
        0.05,    // salesTaxRate
        0.02,    // propertyTaxRate
        5000,    // population
        "TestCity", // name
        1000000, // budget
        0.02,    // crimeRate
        6000,    // housingCapacity
        5000,    // housingDemand
        1000,    // powerCapacity
        800,     // powerDemand
        3000,    // jobDemand
        3500,    // jobCapacity
        0.5,     // trafficIndex
        0.6,     // entertainmentIndex
        0.7,     // healthcareIndex
        0.8,     // educationIndex
        City::currentYear  // year
    );
    
    // Restore the initial state
    city.restoreFromMemento(initialState);
    
    // Update budget (this will subtract from the initial budget)
    city.updateBudget(100000);
    
    city.printStats();
    
    // Save this state
    caretaker.addMemento(City::currentYear, city.saveToMemento());

    // Advance to next year
    City::currentYear++;
    std::cout << "\n=== City State (Year " << City::currentYear << ") ===" << std::endl;
    
    // Create new state memento with growth
    CityMemento* newState = new CityMemento(
        0.15,    // incomeTaxRate
        0.07,    // salesTaxRate
        0.03,    // propertyTaxRate
        6500,    // population grew by 30%
        "TestCity",
        850000,  // budget after expenses
        0.03,    // crimeRate
        7000,    // housingCapacity
        6800,    // housingDemand increased
        1200,    // powerCapacity
        1000,    // powerDemand increased
        4000,    // jobDemand increased
        4200,    // jobCapacity
        0.6,     // trafficIndex
        0.7,     // entertainmentIndex
        0.7,     // healthcareIndex
        0.8,     // educationIndex
        City::currentYear
    );
    
    // Restore to the new state
    city.restoreFromMemento(newState);
    
    // Update budget for new year
    city.updateBudget(150000);
    
    city.printStats();
    
    // Save this state
    caretaker.addMemento(City::currentYear, city.saveToMemento());

    // Restore to previous year
    std::cout << "\n=== Restoring to Year " << (City::currentYear - 1) << " ===" << std::endl;
    CityMemento* previousState = caretaker.getMemento(City::currentYear - 1);
    if (previousState) {
        city.restoreFromMemento(previousState);
        city.printStats();
    }

    // Cleanup
    delete initialState;
    delete newState;

    return 0;
}