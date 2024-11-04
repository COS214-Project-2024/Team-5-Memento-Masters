#include "CityMemento.h"

CityMemento::CityMemento(double incomeTaxRate, double salesTaxRate, double propertyTaxRate,
            int population, string name, double budget, double crimeRate,
            int housingCapacity, int housingDemand, int powerCapacity,
            int powerDemand, int jobDemand, int jobCapacity, double trafficIndex,
            double entertainmentIndex, double healthcareIndex, double educationIndex,
            int year)
    : incomeTaxRate(incomeTaxRate),
      salesTaxRate(salesTaxRate), propertyTaxRate(propertyTaxRate),
      population(population), name(name), budget(budget), crimeRate(crimeRate),
      housingCapacity(housingCapacity), housingDemand(housingDemand),
      powerCapacity(powerCapacity), powerDemand(powerDemand),
      jobDemand(jobDemand), jobCapacity(jobCapacity), trafficIndex(trafficIndex),
      entertainmentIndex(entertainmentIndex), healthcareIndex(healthcareIndex),
      educationIndex(educationIndex), year(year) {}

int CityMemento::getYear() const {
    return year;
}