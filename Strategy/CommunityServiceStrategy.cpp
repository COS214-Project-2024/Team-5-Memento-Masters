// STRATEGY DESIGN PATTERN (ConcreteStrategy)
// CommunityServiceStrategy.cpp

#include "CommunityServiceStrategy.h"

std::string CommunityServiceStrategy::punishCrime(const std::string& crime) const {
    return "Punishment for " + crime + " : 100 hours of community service.";
}
