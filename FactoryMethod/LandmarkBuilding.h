
using namespace std;

#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

#include "Building.h"

/**
 * @class LandmarkBuilding
 * @brief Defines a landmark building
 * 
 * This class is a concrete product of the Factory Method design pattern.
 */
class LandmarkBuilding: public Building
{
private: 
    int entertainmentValue; ///< Entertainment value of the building.

public: 
    /**
     * @brief Constructor
     * @param cost The cost of the landmark building
     * @param entertainment The entertainment value of the landmark building
     */
    LandmarkBuilding(int cost, int entertainment = 0) : Building(cost, "Landmark"), entertainmentValue(entertainment) {}

    /**
     * @brief Updates the entertainment value of the building.
     */
    void updateEntertainment();
    
    /**
     * @brief Destructor
     */
    virtual ~LandmarkBuilding() = default;
};

#endif //LANDMARKBUILDING_H LandmarkBuilding(cost:int, entertainment:int)
