//STRATEGY DESIGN PATTERN
//DeathSentenceStrategy.h

#ifndef DEATH_SENTENCE_STRATEGY_H
#define DEATH_SENTENCE_STRATEGY_H

#include "CrimePunishmentStrategy.h"

class DeathSentenceStrategy : public CrimePunishmentStrategy {
public:
    std::string punishCrime(const std::string& crime) const override;
};

#endif // DEATH_SENTENCE_STRATEGY_H
