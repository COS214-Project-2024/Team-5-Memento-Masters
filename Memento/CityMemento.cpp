#include "CityMemento.h"
#include <sstream>
#include <iomanip>

CityMemento::CityMemento(double incomeTaxRate, double salesTaxRate, double propertyTaxRate,
                         int population, const std::string& name, double budget, double crimeRate,
                         int housingCapacity, int housingDemand, int powerCapacity,
                         int powerDemand, int jobCapacity, int employed, 
                         double trafficIndex, double entertainmentIndex, double healthcareIndex, double educationIndex,
                         double averageIncome, double incomeSpeniture, double estimetedBuildValue, int year)
    : incomeTaxRate(incomeTaxRate), salesTaxRate(salesTaxRate), propertyTaxRate(propertyTaxRate),
      population(population), name(name), budget(budget), crimeRate(crimeRate),
      housingCapacity(housingCapacity), housingDemand(housingDemand), powerCapacity(powerCapacity),
      powerDemand(powerDemand), jobCapacity(jobCapacity), employed(employed), 
      trafficIndex(trafficIndex), entertainmentIndex(entertainmentIndex), healthcareIndex(healthcareIndex), educationIndex(educationIndex),
      averageIncome(averageIncome), incomeSpeniture(incomeSpeniture), estimetedBuildValue(estimetedBuildValue), year(year) {}

int CityMemento::getYear() const {
    return year;
}

std::string CityMemento::toString() const {
    std::ostringstream oss;
    oss << "\033[1;34mCityMemento\033[0m [\n"
        << "  \033[1;32mYear:\033[0m " << year << "\n"
        << "  \033[1;32mIncome Tax Rate:\033[0m " << incomeTaxRate << "\n"
        << "  \033[1;32mSales Tax Rate:\033[0m " << salesTaxRate << "\n"
        << "  \033[1;32mProperty Tax Rate:\033[0m " << propertyTaxRate << "\n"
        << "  \033[1;32mPopulation:\033[0m " << population << "\n"
        << "  \033[1;32mName:\033[0m " << name << "\n"
        << "  \033[1;32mBudget:\033[0m " << budget << "\n"
        << "  \033[1;32mCrime Rate:\033[0m " << crimeRate << "\n"
        << "  \033[1;32mHousing Capacity:\033[0m " << housingCapacity << "\n"
        << "  \033[1;32mHousing Demand:\033[0m " << housingDemand << "\n"
        << "  \033[1;32mPower Capacity:\033[0m " << powerCapacity << "\n"
        << "  \033[1;32mPower Demand:\033[0m " << powerDemand << "\n"
        << "  \033[1;32mJob Capacity:\033[0m " << jobCapacity << "\n"
        << "  \033[1;32mEmployed:\033[0m " << employed << "\n" 
        << "  \033[1;32mTraffic Index:\033[0m " << trafficIndex << "\n"
        << "  \033[1;32mEntertainment Index:\033[0m " << entertainmentIndex << "\n"
        << "  \033[1;32mHealthcare Index:\033[0m " << healthcareIndex << "\n"
        << "  \033[1;32mEducation Index:\033[0m " << educationIndex << "\n"
        << "  \033[1;32mAverage Income:\033[0m " << averageIncome << "\n"
        << "  \033[1;32mIncome Speniture:\033[0m " << incomeSpeniture << "\n"
        << "  \033[1;32mEstimated Build Value:\033[0m " << estimetedBuildValue << "\n"
        << "]";
    return oss.str();
}