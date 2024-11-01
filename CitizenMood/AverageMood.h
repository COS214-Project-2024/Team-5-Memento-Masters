#ifndef MEMENTOMASTERS_AVERAGEMOOD_H
#define MEMENTOMASTERS_AVERAGEMOOD_H

#include "CitizenMood.h"

/**
 * @class AverageMood
 * @brief Represents the average mood of a citizen.
 *
 * Inherits from CitizenMood and defines transitions to ExcellentMood and PoorMood.
 */
class AverageMood: public CitizenMood {
public:
    /**
     * @brief Constructs an AverageMood object with default health value.
     */
    AverageMood();

    /**
     * @brief Transitions the citizen's mood to ExcellentMood.
     * @param c Pointer to the Citizen object.
     */
    void isExcellent(Citizen *c) override;

    /**
     * @brief Keeps the citizen's mood in AverageMood.
     * @param c Pointer to the Citizen object.
     */
    void isAverage(Citizen *c) override;

    /**
     * @brief Transitions the citizen's mood to PoorMood.
     * @param c Pointer to the Citizen object.
     */
    void isPoor(Citizen *c) override;
};

#endif //MEMENTOMASTERS_AVERAGEMOOD_H
