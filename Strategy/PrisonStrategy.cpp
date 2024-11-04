// STRATEGY DESIGN (ConcreteStrategy)
// PrisonStrategy.cpp

#include "PrisonStrategy.h"

std::string PrisonStrategy::punishCrime(const std::string& crime) const {
    return "Punishment for " + crime + ": 5 years in prison";
}