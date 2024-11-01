
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

bool Citizen::isHasCriminalRecord() const {
    return hasCriminalRecord;
}

void Citizen::setHasCriminalRecord(bool hasCriminalRecord) {
    Citizen::hasCriminalRecord = hasCriminalRecord;
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

int Citizen::calculateHealth() {
    return this->mood->getHealth();
}

Citizen::Citizen(const string &name, int age, bool hasCriminalRecord, const string &jobTitle) : name(name), age(age),
                                                                                                hasCriminalRecord(
                                                                                                        hasCriminalRecord),
                                                                                                jobTitle(jobTitle), mood(nullptr) {}
