//STRATEGY DESIGN PATTERN
//PrisonStrategy.h

#ifndef PRISON_STRATEGY_H
#define PRISON_STRATEGY_H

#include "CrimePunishmentStrategy.h"

/**
 * @class PrisonStrategy
 * @brief Concrete strategy class for punishing crimes with prison time
 */
class PrisonStrategy : public CrimePunishmentStrategy {
public:
    /**
     * @brief Construct a new Prison Strategy object
     * @param crime The crime to be punished
     * @return A new Prison Strategy object
     */
    std::string punishCrime(const std::string& crime) const override;
};

#endif // PRISON_STRATEGY_H

