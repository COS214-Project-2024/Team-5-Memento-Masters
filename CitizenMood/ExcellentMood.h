#ifndef MEMENTOMASTERS_EXCELLENTMOOD_H
#define MEMENTOMASTERS_EXCELLENTMOOD_H

#include "CitizenMood.h"

/**
 * @class ExcellentMood
 * @brief Represents the excellent mood of a citizen.
 *
 * Inherits from CitizenMood and defines transitions to AverageMood and PoorMood.
 */
class ExcellentMood: public CitizenMood {
public:
    /**
     * @brief Constructs an ExcellentMood object with default health value.
     */
    ExcellentMood();

    /**
     * @brief Keeps the citizen's mood in ExcellentMood.
     * @param c Pointer to the Citizen object.
     */
    void isExcellent(Citizen *c) override;

    /**
     * @brief Transitions the citizen's mood to AverageMood.
     * @param c Pointer to the Citizen object.
     */
    void isAverage(Citizen *c) override;

    /**
     * @brief Transitions the citizen's mood to PoorMood.
     * @param c Pointer to the Citizen object.
     */
    void isPoor(Citizen *c) override;
};

#endif //MEMENTOMASTERS_EXCELLENTMOOD_H
