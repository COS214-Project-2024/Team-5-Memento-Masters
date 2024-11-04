//STRATEGY DESIGN PATTERN
//PrisonStrategy.h

#ifndef PRISON_STRATEGY_H
#define PRISON_STRATEGY_H

#include "CrimePunishmentStrategy.h"

class PrisonStrategy : public CrimePunishmentStrategy {
public:
    std::string punishCrime(const std::string& crime) const override;
};

#endif // PRISON_STRATEGY_H

