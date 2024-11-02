#ifndef CITIZEN_H
#define CITIZEN_H

#include "string"
#include "vector"
#include "CitizenMood.h"
using namespace std;
class Visitor; // Forward declaration



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
    Citizen(string name); // A baby
    Citizen(string name, int age); //A migrant

    void setMood(string mood);
    string getMood();
    int calculateHealth();
    void makeComplaint(string complaint);
    void punish(string crime);
    void accept(Visitor *visitor);
    ~Citizen();

};



#endif //CITIZEN_H