// CrimePunishmentStrategy.h
// STRATEGY DESIGN PATTERN (Strategy)

#ifndef CRIME_PUNISHMENT_STRATEGY_H
#define CRIME_PUNISHMENT_STRATEGY_H

#include <string>

class CrimePunishmentStrategy {
public:
    virtual ~CrimePunishmentStrategy();
    virtual std::string punishCrime(const std::string& crime) const = 0; 
};

#endif // CRIME_PUNISHMENT_STRATEGY_H















