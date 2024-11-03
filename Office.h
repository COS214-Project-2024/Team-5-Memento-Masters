
#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"

class Office: public CommercialBuilding
{
public:
    Office(int cost = 10000);
        
    ~Office() = default;
};

#endif