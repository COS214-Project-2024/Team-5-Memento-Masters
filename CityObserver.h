#ifndef CITYOBSERVER_H
#define CITYOBSERVER_H

// #include "City.h"
#include <string>
class City;

class CityObserver { 
    private:

    protected:
        City* subject; 
    public:

        CityObserver();

        virtual ~CityObserver();

        // virtual void update() = 0;

        // virtual void update(bool isTaxIncrease) = 0;
        virtual void update(const std::string& taxType, double newRate) = 0;

        virtual void setSubject(City* subject) ;
};

#endif