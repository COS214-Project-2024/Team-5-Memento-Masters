#ifndef CITIZEN_H
#define CITIZEN_H

#include <memory>
#include <string>
#include <vector>
#include "CitizenMood/CitizenMood.h"
#include "Strategy/CrimePunishmentStrategy.h"

using namespace std;

class CitizenMood;

class Citizen {
private:
    CitizenMood* mood;
    string name;
    int age;
    bool hasCriminalRecord;
    string jobTitle;
    vector<string> crimes;
    unique_ptr<CrimePunishmentStrategy> strategy;

public:
    // Constructor
    Citizen(const string &name, int age, bool hasCriminalRecord, const string &jobTitle, unique_ptr<CrimePunishmentStrategy> strategy = nullptr);

    // Mood-related methods
    void setMood(CitizenMood* mood);
    CitizenMood* getMood() const;

    // Basic attributes methods
    const string& getName() const;
    void setName(const string &name);
    int getAge() const;
    void setAge(int age);
    bool isHasCriminalRecord() const;
    void setHasCriminalRecord(bool hasCriminalRecord);
    const string& getJobTitle() const;
    void setJobTitle(const string &jobTitle);
    const vector<string>& getCrimes() const;
    void setCrimes(const vector<string> &crimes);

    // Health calculation
    int calculateHealth();

    // Complaint handling (Chain of Responsibility)
    void makeComplaint(string complaint);

    // Crime and punishment (Strategy Pattern)
    void commitCrime(const string& crime);
    void setPunishmentStrategy(unique_ptr<CrimePunishmentStrategy> newStrategy);
    string receivePunishment() const;
    string receivePunishmentForCrime(const string& crime) const;
};

#endif // CITIZEN_H