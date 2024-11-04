//STRATEGY DESIGN PATTERN
//CommunityServiceStrategy.h
#ifndef COMMUNITY_SERVICE_STRATEGY_H
#define COMMUNITY_SERVICE_STRATEGY_H

#include "CrimePunishmentStrategy.h"

class CommunityServiceStrategy : public CrimePunishmentStrategy {
public:
    std::string punish() const override;
    std::string punishCrime(const std::string& crime) const; 
};

#endif // COMMUNITY_SERVICE_STRATEGY_H
