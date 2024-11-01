#ifndef CITY_H
#define CITY_H

#include <vector>
#include <string>
#include "Observer/CityObserver.h"
#include "Citizen.h"
#include <algorithm>
using namespace std;

class City {
    private:
        vector<CityObserver*> observerList; ///< List of observers observing the city
        vector<Citizen*> citizens;
        double incomeTaxRate;
        double salesTaxRate;
        double propertyTaxRate;
    protected:

    public:
        City();
        ~City();
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
        void notify(const std::string& taxType, double newRate);

        std::vector<Citizen*> getCitizens();
        void addCitizen(Citizen* citizen);
        double getTaxRate();

};

#endif