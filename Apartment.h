
#ifndef APARTMENT_H
#define APARTMENT_H

#include "ResidentialBuilding.h"

class Apartment: public ResidentialBuilding
{
public:
    Apartment(int cost = 1000000);
        
    ~Apartment() = default;
};

#endif //APARTMENT_H