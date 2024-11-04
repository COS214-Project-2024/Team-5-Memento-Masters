//STRATEGY DESIGN PATTERN
//DeathSentenceStrategy.cpp

#ifndef DEATH_SENTENCE_STRATEGY_H
#define DEATH_SENTENCE_STRATEGY_H

#include "CrimePunishmentStrategy.h"

class DeathSentenceStrategy : public CrimePunishmentStrategy {
public:
    std::string punish() const;
    std::string punishCrime(const std::string& crime) const;
};

#endif // DEATH_SENTENCE_STRATEGY_H
