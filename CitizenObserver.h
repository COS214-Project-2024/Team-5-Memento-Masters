#ifndef CITIZENOBSERVER_H
#define CITIZENOBSERVER_H

#include "CityObserver.h"
#include <vector>
#include "Citizen.h"

class CitizenObserver : public CityObserver {
    private:
         std::vector<Citizen*> citizens; ///< List of citizens in the city
    protected:
        // std::vector<Citizen*> citizens;
    public:
        CitizenObserver();

        ~CitizenObserver();
        // virtual void update();

        //virtual void update(bool isTaxIncrease) ;
         virtual void update(const std::string& taxType, double newRate);
};

#endif