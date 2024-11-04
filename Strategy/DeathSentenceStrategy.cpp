// STRATEGY DESIGN PATTERN (Concrete Strategy)
// DeathSentenceStrategy.cpp

#include "DeathSentenceStrategy.h"

std::string DeathSentenceStrategy::punishCrime(const std::string& crime) const {
    return "Punishment for " + crime + ": Death sentence";
}

