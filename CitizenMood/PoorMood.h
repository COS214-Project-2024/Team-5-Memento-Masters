#ifndef MEMENTOMASTERS_POORMOOD_H
#define MEMENTOMASTERS_POORMOOD_H

#include "CitizenMood.h"

/**
 * @class PoorMood
 * @brief Represents the poor mood of a citizen.
 *
 * Inherits from CitizenMood and defines transitions to AverageMood and ExcellentMood.
 */
class PoorMood: public CitizenMood {
public:
    /**
     * @brief Constructs a PoorMood object with default health value.
     */
    PoorMood();

    /**
     * @brief Transitions the citizen's mood to ExcellentMood.
     * @param c Pointer to the Citizen object.
     */
    void isExcellent(Citizen *c) override;

    /**
     * @brief Transitions the citizen's mood to AverageMood.
     * @param c Pointer to the Citizen object.
     */
    void isAverage(Citizen *c) override;

    /**
     * @brief Keeps the citizen's mood in PoorMood.
     * @param c Pointer to the Citizen object.
     */
    void isPoor(Citizen *c) override;
};

#endif //MEMENTOMASTERS_POORMOOD_H
