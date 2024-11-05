
#ifndef MEMENTOMASTERS_CITIZENMOOD_H
#define MEMENTOMASTERS_CITIZENMOOD_H


#include "string"
#include "vector"

#include "../Citizen.h"

using namespace std;

class Citizen;
/**
 * @class CitizenMood
 * @brief Abstract base class representing the mood of a citizen
 * 
 * This class defines the interface for different moods that a citizen can have.
 * It includes methods to get the health of the citizen and to change the mood
 * of the citizen to Excellent, Average, or Poor.
 */
class CitizenMood {
protected:
    int health = 0; ///< Health of the citizen
public:
    /**
     * @brief Get the Health level of the citizen
     * @return The health level of the citizen
     */
    int getHealth() const;

    /**
     * @brief Change the mood of the Citizen to Excellent
     * @param c Pointer to the citizen whose mood is to be changed
     */
    virtual void isExcellent(Citizen* c) = 0;

    /**
     * @brief Change the mood of the Citizen to Average
     * @param c Pointer to the citizen whose mood is to be changed
     */
    virtual void isAverage(Citizen* c) = 0;

    /**
     * @brief Change the mood of the Citizen to Poor
     * @param c Pointer to the citizen whose mood is to be changed
     */
    virtual void isPoor(Citizen* c) = 0;


};


#endif //MEMENTOMASTERS_CITIZENMOOD_H
