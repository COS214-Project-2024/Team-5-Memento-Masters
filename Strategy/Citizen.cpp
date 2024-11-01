//STRATEGY DESIGN PATTERN (CONTEXT)
//Citizen.cpp

#include "Citizen.h"
#include "CommunityServiceStrategy.h"
#include "PrisonStrategy.h"
#include "DeathSentenceStrategy.h"
#include <stdexcept>

Citizen::Citizen(const std::string& name, std::unique_ptr<CrimePunishmentStrategy> strategy) 
    : name(name), strategy(std::move(strategy)) {}

void Citizen::commitCrime(const std::string& crime) {
    if (crime == "petty") {
        setPunishmentStrategy(std::make_unique<CommunityServiceStrategy>());
    } else if (crime == "serious") {
        setPunishmentStrategy(std::make_unique<PrisonStrategy>());
    } else if (crime == "murder") {
        setPunishmentStrategy(std::make_unique<DeathSentenceStrategy>());
    } else {
        throw std::invalid_argument("Unknown crime type");
    }
}

void Citizen::setPunishmentStrategy(std::unique_ptr<CrimePunishmentStrategy> newStrategy) {
    strategy = std::move(newStrategy);
}

std::string Citizen::receivePunishment() const {
    return strategy ? strategy->punish() : "No punishment strategy set.";
}

std::string Citizen::receivePunishmentForCrime(const std::string& crime) const {
    return strategy ? strategy->punishCrime(crime) : "No punishment strategy set.";
}

std::string Citizen::getName() const {
    return name;
}
