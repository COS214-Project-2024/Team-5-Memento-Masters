
#include "Citizen.h"

void Citizen::setMood(CitizenMood *mood) {
    this->mood = mood;
}

CitizenMood *Citizen::getMood() const {
    return mood;
}

const string &Citizen::getName() const {
    return name;
}

void Citizen::setName(const string &name) {
    Citizen::name = name;
}

int Citizen::getAge() const {
    return age;
}

void Citizen::setAge(int age) {
    Citizen::age = age;
}

bool Citizen::hasCriminalRecord() const {
    return !crimes.empty();
}

const string &Citizen::getJobTitle() const {
    return jobTitle;
}

void Citizen::setJobTitle(const string &jobTitle) {
    Citizen::jobTitle = jobTitle;
}

const vector<string> &Citizen::getCrimes() const {
    return crimes;
}

void Citizen::setCrimes(const vector<string> &crimes) {
    Citizen::crimes = crimes;
}

void Citizen::setPunishmentStrategy(CrimePunishmentStrategy* strategy) {
    delete punishmentStrategy;
    punishmentStrategy = strategy;
}

string Citizen::punish(const string& crime) {
    if (punishmentStrategy != NULL) {
        delete punishmentStrategy;
    }
    
    if (crime == "A" || crime == "murder" || crime == "Murder") {
        punishmentStrategy = new DeathSentenceStrategy();
    }
    else if (crime == "B" ||crime == "serious crime" || crime == "Serious Crime" || crime == "robbery" || crime == "Robbery") {
        punishmentStrategy = new PrisonStrategy();
    }
    else if (crime == "C" ||crime == "petty crime" || crime == "Petty Crime" || crime == "vandalism" || crime == "Vandalism") {
        punishmentStrategy = new CommunityServiceStrategy();
    }
    else {
        return "Unknown crime type: " + crime + ". No punishment.";
    }

    return punishmentStrategy->punishCrime(crime);
}

void Citizen::addCrime(const string& crime) {
    crimes.push_back(crime);
}

int Citizen::calculateHealth() {
    return this->mood->getHealth();
}

Citizen::Citizen(const string &name, int age, const string &jobTitle) : name(name), age(age), jobTitle(jobTitle), mood(nullptr) {}
