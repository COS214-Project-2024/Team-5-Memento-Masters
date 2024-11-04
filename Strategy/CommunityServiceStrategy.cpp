// STRATEGY DESIGN PATTERN (ConcreteStrategy)
// CommunityServiceStrategy.cpp

#include "CommunityServiceStrategy.h"

std::string CommunityServiceStrategy::punish() const {
    return "Assigned to community service.";
}

std::string CommunityServiceStrategy::punishCrime(const std::string& crime) const {
    return "For the crime of " + crime + ", assigned to community service.";
}
