
#ifndef APARTMENT_H
#define APARTMENT_H

#include "ResidentialBuilding.h"

class Apartment: public ResidentialBuilding
{
public:
    Apartment(int cost = 100000) : ResidentialBuilding(cost, 100.0, 10) {}
        
    ~Apartment() = default;
};

#endif //APARTMENT_H
