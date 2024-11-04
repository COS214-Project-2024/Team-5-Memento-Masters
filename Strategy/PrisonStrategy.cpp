// STRATEGY DESIGN (ConcreteStrategy)
// PrisonStrategy.cpp

#include "PrisonStrategy.h"

std::string PrisonStrategy::punish() const {
    return "Sent to prison.";
}

std::string PrisonStrategy::punishCrime(const std::string& crime) const {
    return "For the crime of " + crime + ", sent to prison.";
}
