#include <iostream>
#include "City.h"
#include "Citizen.h"
#include "CityObserver.h"
#include "CitizenObserver.h"

int main(){
    City* city = new City();
    Citizen* citizen1 = new Citizen();
    Citizen* citizen2 = new Citizen();

    city->addCitizen(citizen1);
    city->addCitizen(citizen2);

    CitizenObserver* citizenObserver = new CitizenObserver();
    //citizenObserver->setSubject(city);
    city->attach(citizenObserver);

    std::cout << "Setting income tax rate to 0.12\n";
    city->setIncomeTaxRate(0.12);

    std::cout << "Setting sales tax rate to 0.08\n";
    city->setSalesTaxRate(0.08);

    std::cout << "Setting property tax rate to 0.25\n";
    city->setPropertyTaxRate(0.25);

    std::cout << "Increasing income tax rate to 0.18\n";
    city->setIncomeTaxRate(0.18); 

    std::cout << "Increasing sales tax rate to 0.12\n";
    city->setSalesTaxRate(0.12);

    std::cout << "Decreasing property tax rate to 0.15\n";
    city->setPropertyTaxRate(0.15); 


    delete citizenObserver;
    delete city;
    delete citizen1;
    delete citizen2;

    return 0;
}