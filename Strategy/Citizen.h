//STRATEGY DESIGN PATTERN(CONTEXT)
//Citizen.h

#ifndef CITIZEN_H
#define CITIZEN_H

#include <memory>
#include <string>
#include "CrimePunishmentStrategy.h"

class Citizen {
private:
    std::string name;
    std::unique_ptr<CrimePunishmentStrategy> strategy;

public:
    Citizen(const std::string& name, std::unique_ptr<CrimePunishmentStrategy> strategy = nullptr);
    void commitCrime(const std::string& crime);
    void setPunishmentStrategy(std::unique_ptr<CrimePunishmentStrategy> newStrategy);
    std::string receivePunishment() const;
    std::string receivePunishmentForCrime(const std::string& crime) const;
    std::string getName() const;
};

#endif // CITIZEN_H
