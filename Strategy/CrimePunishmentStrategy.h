// CrimePunishmentStrategy.h
// STRATEGY DESIGN PATTERN (Strategy)

#ifndef CRIME_PUNISHMENT_STRATEGY_H
#define CRIME_PUNISHMENT_STRATEGY_H

#include <string>

/**
 * @class CrimePunishmentStrategy
 * @brief Abstract strategy class for punishing crimes
 */
class CrimePunishmentStrategy {
public:
    /**
     * @brief Destroy the Crime Punishment Strategy object
     */
    virtual ~CrimePunishmentStrategy();

    /**
     * @brief Punish the crime
     * 
     * @param crime The crime to be punished
     * @return std::string The punishment for the crime
     */
    virtual std::string punishCrime(const std::string& crime) const = 0; 
};

#endif // CRIME_PUNISHMENT_STRATEGY_H





















