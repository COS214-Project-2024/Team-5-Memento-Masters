
#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"

class Office: public CommercialBuilding
{
public:
    Office(int cost = 20000) : CommercialBuilding(cost, 100.0, 50.0) {}
        
    ~Office() = default;
};

#endif
