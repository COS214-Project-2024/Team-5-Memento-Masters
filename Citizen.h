#ifndef CITIZEN_H
#define CITIZEN_H

#include "string"
#include "vector"
#include "CitizenMood/CitizenMood.h"

using namespace std;

class CitizenMood;

class Citizen {
private:
    CitizenMood* mood;
    string name;
    int age;
    string jobTitle;
    vector<string> crimes;
    CrimePunishmentStrategy* punishmentStrategy;
public:
    // todo constructor
    Citizen(const string &name, int age, const string &jobTitle);

    void setMood(CitizenMood* mood);
    CitizenMood *getMood() const;

    const string &getName() const;
    void setName(const string &name);

    int getAge() const;
    void setAge(int age);

    bool hasCriminalRecord() const;

    const string &getJobTitle() const;
    void setJobTitle(const string &jobTitle);

    const vector<string> &getCrimes() const;
    void setCrimes(const vector<string> &crimes);

    int calculateHealth();

    void makeComplaint(string complaint);  //todo for chain

    void setPunishmentStrategy(CrimePunishmentStrategy* strategy);
    string punish(const string& crime); //todo for strategy
    void addCrime(const string& crime);

};

#endif //CITIZEN_H
