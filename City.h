#ifndef CITY_H
#define CITY_H

#include <vector>
#include <string>
#include "CityObserver.h"
#include "Citizen.h"
#include <algorithm>
using namespace std;

class City {
    private:
        vector<CityObserver*> observerList; 
        vector<Citizen*> citizens;
        // double taxRate;
        double incomeTaxRate;
        double salesTaxRate;
        double propertyTaxRate;
    protected:

    public:
        City();
        ~City();
        //void adjustTaxRate(double newTaxRate);
        void setIncomeTaxRate(double rate);

        void setSalesTaxRate(double rate);

        void setPropertyTaxRate(double rate);

        void attach(CityObserver* observer);

        void detach(CityObserver* observer);

        // void notify();
        void notify(const std::string& taxType, double newRate);
        //void notify(bool isTaxIncrease);

        vector<Citizen*> getCitizens();
        void addCitizen(Citizen* citizen);
        double getTaxRate();

};

#endif