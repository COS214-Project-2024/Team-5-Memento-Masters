#ifndef CITY_H
#define CITY_H

#include "CommandUI/MapNode.h"
#include "Citizen.h"
#include "Observer/CityObserver.h"
#include "Tax/TaxSystem.h"

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

class City {
    private:
        vector<CityObserver*> observerList; ///< List of observers observing the city
        vector<Citizen*> citizens;
        double incomeTaxRate;
        double salesTaxRate;
        double propertyTaxRate;
        vector<vector<MapNode>> map;
        int population;
        string name;
        double budget;
        double crimeRate;
        int housingCapacity;
        int hasHouse; //hasHouse
        int powerCapacity;
        int powerDemand;
        int employed;
        int jobCapacity;
        double trafficIndex;
        double entertainmentIndex;
        double healthcareIndex;
        double educationIndex;
        double averageIncome;
        double incomeSpeniture;
        double estimetedBuildValue;
        TaxSystem* TaxAuth;

    protected:

    public:
        City();

        void initMap(int width, int height);

        void setIncomeTaxRate(double rate);

        void setSalesTaxRate(double rate);

        void setPropertyTaxRate(double rate);

        /**
         * @brief Attaches an observer to the city
         * 
         * @param observer The observer to be attached
         */
        void attach(CityObserver* observer);

        /**
         * @brief Detaches an observer from the city
         * 
         * @param observer The observer to be detached
         */
        void detach(CityObserver* observer);

        /**
         * @brief Notifies observers of a change in tax rate
         * 
         * @param taxType The type of tax that has changed
         * @param newRate The new rate of the tax
         */
        void notify(const string& taxType, double newRate);

        vector<Citizen*> getCitizens();
        void addCitizen(Citizen* citizen);
        double getTaxRate(char type);

        void constructBuilding(string buildingType, string coord, Building* buildptr);
        void printMap();
        bool hasBuildingAt(int row, int col) const;
        string getBuildingTypeAt(int row, int col) const;
        bool demolishBuilding(const string& coord);
        string checkCoord(string coord, bool forRemoval = false);
        void printStats();
        bool updateBudget(double amount);
        double getAverageIncome();
        double getIncomeSpenditure();
        double getEstimatedBuildValue();
        void updateEstimatedBuildValue(double amount);
        int getJobAvailability();
        void incEmployed();
        void decEmployed();
        int getPopulation();
        void updateAges();
        ~City();

};
#endif //CITY_H