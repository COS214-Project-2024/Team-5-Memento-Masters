#ifndef CITY_MEMENTO_H
#define CITY_MEMENTO_H

#include <vector>
#include <string>
#include "Citizen.h"

class CityMemento {
private:
    double incomeTaxRate; 
    double salesTaxRate;  
    double propertyTaxRate;  
    int population; 
    std::string name;    
    double budget; 
    double crimeRate;  
    int housingCapacity;  
    int housingDemand;  
    int powerCapacity;  
    int powerDemand;
    int jobCapacity;
    int employed;
    double trafficIndex;
    double entertainmentIndex;
    double healthcareIndex;
    double educationIndex;
    double averageIncome;
    double incomeSpeniture;
    double estimetedBuildValue;
    int year;

    friend class City; 

public:
    CityMemento(double incomeTaxRate, double salesTaxRate, double propertyTaxRate,
                int population, const std::string& name, double budget, double crimeRate,
                int housingCapacity, int housingDemand, int powerCapacity,
                int powerDemand, int jobCapacity, int employed,
                double trafficIndex, double entertainmentIndex, double healthcareIndex, double educationIndex,
                double averageIncome, double incomeSpeniture, double estimetedBuildValue, int year);

    int getYear() const;
    std::string toString() const;
};

#endif