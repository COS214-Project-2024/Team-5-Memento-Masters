#ifndef CITYOBSERVER_H
#define CITYOBSERVER_H

// #include "City.h"
#include <string>
class City;

/**
 * @brief Abstract class representing an observer for the City class
 */
class CityObserver { 
    private:

    protected:
        City* subject; ///< The city being observer (the subject)
    public:
        /**
         * @brief Construct a new CityObserver object
         */
        CityObserver();

        /**
         * @brief Destroy the CityObserver object
         */
        virtual ~CityObserver();

        // virtual void update() = 0;
        // virtual void update(bool isTaxIncrease) = 0;

        /**
         * @brief Update the observer with the new tax rate
         * 
         * @param taxType The type of tax that has changed
         * @param newRate The new tax rate
         */
        virtual void update(const std::string& taxType, double newRate) = 0;

        /**
         * @brief Set the Subject (city) to be observed
         * 
         * @param subject The city to be observed
         */
        virtual void setSubject(City* subject) ;
};

#endif