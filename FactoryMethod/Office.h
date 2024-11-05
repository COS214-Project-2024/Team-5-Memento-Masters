
#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"

/**
 * @class Office
 * @brief A class representing an office building
 */
class Office: public CommercialBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the office building
     */
    Office(int cost = 20000) : CommercialBuilding(cost, 100.0, 50.0) {}
        
    /**
     * @brief Destructor
     */
    ~Office() = default;
};

#endif
