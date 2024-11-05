
#ifndef TRAINSTATION_H
#define TRAINSTATION_H

#include "TransportBuilding.h"

/**
 * @class TrainStation
 * @brief A class representing a train station
 */
class TrainStation: public TransportBuilding
{
public:
    /**
     * @brief Constructor
     * @param cost The cost of the train station
     */
    TrainStation(int cost = 500000) : TransportBuilding(cost, 100) {}
    
    /**
     * @brief Destructor
     */
    ~TrainStation() = default;
};

#endif
