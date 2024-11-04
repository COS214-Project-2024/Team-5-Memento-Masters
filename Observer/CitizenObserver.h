#ifndef CITIZENOBSERVER_H
#define CITIZENOBSERVER_H

#include "CityObserver.h"
#include <vector>
#include "Citizen.h"

/**
 * @brief Concrete observer class that observes changes in the city and updates citizens
 */
class CitizenObserver : public CityObserver {
    private:
         std::vector<Citizen*> citizens; ///< List of citizens in the city
    protected:
        // std::vector<Citizen*> citizens;
    public:
        /**
         * @brief Construct a new CitizenObserver object
         */
        CitizenObserver();

        /**
         * @brief Destroy the CitizenObserver object
         */
        ~CitizenObserver();
        // virtual void update();
        //virtual void update(bool isTaxIncrease) ;

        /**
         * @brief Updates the citizens mood based on the new tax rate
         * 
         * @param taxType The type of tax that has changed
         * @param newRate The new tax rate
         * @return * void 
         */
        virtual void update(const std::string& taxType, double newRate);
};

#endif