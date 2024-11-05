
#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"

/**
 * @class Factory
 * @brief Defines a factory building
 * 
 * This class is a concrete product of the Factory Method design pattern.
 */
class Factory: public IndustrialBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the factory
     */
    Factory(int cost = 200000) : IndustrialBuilding(cost, 100.0, 50.0) {}
    
    /**
     * @brief Destructor
     */
    ~Factory() = default;
};

#endif //FACTORY_H
