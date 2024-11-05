//STRATEGY DESIGN PATTERN
//DeathSentenceStrategy.h

#ifndef DEATH_SENTENCE_STRATEGY_H
#define DEATH_SENTENCE_STRATEGY_H

#include "CrimePunishmentStrategy.h"

/**
 * @class DeathSentenceStrategy
 * @brief Concrete strategy class for punishing crimes with the death sentence
 */
class DeathSentenceStrategy : public CrimePunishmentStrategy {
public:
    /**
     * @brief Construct a new Death Sentence Strategy object
     * @param crime The crime to be punished
     * @return A new Death Sentence Strategy object
     */
    std::string punishCrime(const std::string& crime) const override;
};

#endif // DEATH_SENTENCE_STRATEGY_H
