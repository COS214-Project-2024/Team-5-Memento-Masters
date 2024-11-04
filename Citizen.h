#ifndef CITIZEN_H
#define CITIZEN_H

#include "string"
#include "vector"
#include "CitizenMood/CitizenMood.h"
#include "Visitor/BuildingReport.h"

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
public:
    // todo constructor
    Citizen(const string &name, int age, bool hasCriminalRecord, const string &jobTitle);

    void setMood(CitizenMood* mood);

    CitizenMood *getMood() const;

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    bool isHasCriminalRecord() const;

    void setHasCriminalRecord(bool hasCriminalRecord);

    const string &getJobTitle() const;

    void setJobTitle(const string &jobTitle);

    const vector<string> &getCrimes() const;

    void setCrimes(const vector<string> &crimes);


    int calculateHealth();

    //todo for chain
    void makeComplaint(string complaint);

    //todo for strategy
    void punish(string crime);
    void accept(CitizenReport *v);
};



#endif //CITIZEN_H
