#ifndef CITY_MEMENTO_H
#define CITY_MEMENTO_H

#include <vector>
#include <string>
// #include "MapNode.h"
#include "Citizen.h"

class CityMemento {
private:
    // Store the state
    // vector<vector<MapNode>> map;
    // vector<Citizen*> citizens;
    double incomeTaxRate; 
    double salesTaxRate;  
    double propertyTaxRate;  
    int population; 
    string name;    
    double budget; 
    double crimeRate;  
    int housingCapacity;  
    int housingDemand;  
    int powerCapacity;  
    int powerDemand;
    int jobDemand;
    int jobCapacity;
    double trafficIndex;
    double entertainmentIndex;
    double healthcareIndex;
    double educationIndex;
    int year; // TO TRACK THE YEAR OF EACH MEMENTO. IMPORTANT VARIABLE

    friend class City; // Allow City to access private members

public:
    CityMemento(double incomeTaxRate, double salesTaxRate, double propertyTaxRate,
    int population, string name, double budget, double crimeRate,
    int housingCapacity, int housingDemand, int powerCapacity,
    int powerDemand, int jobDemand, int jobCapacity, double trafficIndex,
    double entertainmentIndex, double healthcareIndex, double educationIndex,
    int year);

    int getYear() const;
};

#endif // CITY_MEMENTO_H