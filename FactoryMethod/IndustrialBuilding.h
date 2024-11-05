
using namespace std;

#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

#include "Building.h"

/**
 * @class IndustrialBuilding
 * @brief Defines an industrial building
 * 
 * This class is a concrete product of the Factory Method design pattern.
 */
class IndustrialBuilding: public Building
{
private: 
    double productionRate; ///< Production rate of the building.
	double resourceConsumption; ///< Resource consumption of the building.

public: 
    /**
     * @brief Constructor
     * @param cost The cost of the industrial building
     * @param prodRate The production rate of the industrial building
     * @param resConsumption The resource consumption of the industrial building
     */
    IndustrialBuilding(int cost, double prodRate = 0.0, double resConsumption = 0.0) : Building(cost, "Industrial"), productionRate(prodRate), resourceConsumption(resConsumption) {}
    
    /**
     * @brief Updates the production of the building.
     */
    void updateProduction();

    /**
     * @brief Consumes resources for the building.
     */
    virtual ~IndustrialBuilding() = default;
};

#endif//INDUSTRIALBUILDING_H IndustrialBuilding(cost:int, prodRate:double, resConsumption:double)
