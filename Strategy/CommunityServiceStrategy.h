//STRATEGY DESIGN PATTERN
//CommunityServiceStrategy.h
#ifndef COMMUNITY_SERVICE_STRATEGY_H
#define COMMUNITY_SERVICE_STRATEGY_H

#include "CrimePunishmentStrategy.h"

/**
 * @class CommunityServiceStrategy
 * @brief Concrete strategy class for punishing crimes with community service
 */
class CommunityServiceStrategy : public CrimePunishmentStrategy {
public:
    /**
     * @brief Construct a new Community Service Strategy object
     * @param crime The crime to be punished
     * @return A new Community Service Strategy object
     */
    std::string punishCrime(const std::string& crime) const override;
};

#endif // COMMUNITY_SERVICE_STRATEGY_H