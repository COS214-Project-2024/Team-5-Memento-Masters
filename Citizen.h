#ifndef CITIZEN_H
#define CITIZEN_H

#include <memory>
#include <string>
#include <vector>
#include "CitizenMood/CitizenMood.h"
#include "Strategy/CrimePunishmentStrategy.h"
#include "Strategy/CommunityServiceStrategy.h"
#include "Strategy/PrisonStrategy.h"
#include "Strategy/DeathSentenceStrategy.h"

using namespace std;

class CitizenMood;

class Citizen {
private:
    CitizenMood* mood;
    string name;
    int age;
    string jobTitle;
    vector<string> crimes;
    CrimePunishmentStrategy* punishmentStrategy; //new
    // unique_ptr<CrimePunishmentStrategy> strategy;
    //bool hasCriminalRecord;  //OLD attribute (revert back only if issues with update)

public:
    // Constructor
    Citizen(const string &name, int age, const string &jobTitle);

    // Mood-related methods
    void setMood(CitizenMood* mood);
    CitizenMood* getMood() const;

    // Basic attributes methods
    const string& getName() const;
    void setName(const string &name);
    int getAge() const;
    void setAge(int age);
    const string& getJobTitle() const;
    void setJobTitle(const string &jobTitle);
    const vector<string>& getCrimes() const;
    void setCrimes(const vector<string> &crimes);

    // Health calculation
    int calculateHealth();

    // Complaint handling (Chain of Responsibility)
    void makeComplaint(string complaint);

    // Crime and punishment (Strategy Pattern)
    bool hasCriminalRecord() const;
    void setPunishmentStrategy(CrimePunishmentStrategy* strategy);
    string punish(const string& crime);
    void addCrime(const string& crime);

    //OLD CRIMEPUNISHMENTSTRATEGY METHODS (revert back if problem)
    // void commitCrime(const string& crime);
    // void setPunishmentStrategy(unique_ptr<CrimePunishmentStrategy> newStrategy);
    // string receivePunishment() const;
    // string receivePunishmentForCrime(const string& crime) const;


};

#endif // CITIZEN_H
