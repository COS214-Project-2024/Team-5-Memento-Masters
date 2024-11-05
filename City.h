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
        vector<Citizen*> citizens; ///< List of citizens in the city
        double incomeTaxRate; ///< The income tax rate of the city
        double salesTaxRate; ///< The sales tax rate of the city
        double propertyTaxRate; ///< The property tax rate of the city
        vector<vector<MapNode>> map; ///< The map of the city 
        int population; ///< The population of the city
        string name; ///< The name of the city 
        double budget; ///< The budget of the city
        double crimeRate; ///< The crime rate of the city
        int housingCapacity; ///< The housing capacity of the city
        int hasHouse; //hasHouse ///< The housing demand of the city
        int powerCapacity;  ///< The power capacity of the city
        int powerDemand; ///< The power demand of the city
        int employed; ///< The number of employed citizens in the city
        int jobCapacity; ///< The job capacity of the city
        double trafficIndex; ///< The traffic index of the city
        double entertainmentIndex; ///< The entertainment index of the city
        double healthcareIndex; ///< The healthcare index of the city
        double educationIndex; ///< The education index of the city 
        double averageIncome;   ///< The average income of the citizens in the city
        double incomeSpeniture; ///< The income spenditure of the city
        double estimetedBuildValue; ///< The estimated build value of the city
        TaxSystem* TaxAuth; ///< The tax authority of the city

    protected:

    public:
        /**
         * @brief Construct a new City object
         * @param name The name of the city
         */
        City();

        /**
         * @brief Construct a new City object
         * @param name The name of the city
         */
        void initMap(int width, int height);

        /**
         * @brief Construct a new City object
         * @param name The name of the city
         */
        void setIncomeTaxRate(double rate);

        /**
         * @brief Construct a new City object
         * @param name The name of the city
         */
        void setSalesTaxRate(double rate);

        /**
         * @brief Construct a new City object
         * @param name The name of the city
         */
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

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        vector<Citizen*> getCitizens();

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        void addCitizen(Citizen* citizen);

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        double getTaxRate(char type);

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        void constructBuilding(string buildingType, string coord, Building* buildptr);

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        void printMap();

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        bool hasBuildingAt(int row, int col) const;

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        string getBuildingTypeAt(int row, int col) const;

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        bool demolishBuilding(const string& coord);

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        string checkCoord(string coord, bool forRemoval = false);

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        void printStats();

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        bool updateBudget(double amount);

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        double getAverageIncome();

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        double getIncomeSpenditure();

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        double getEstimatedBuildValue();

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        void updateEstimatedBuildValue(double amount);

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        int getJobAvailability();

        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        void incEmployed();
        void decEmployed();
        int getPopulation();
        void updateAges();
        /**
         * @brief Get the name of the city
         * @return string The name of the city
         */
        ~City();

};
#endif //CITY_H