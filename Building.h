//FACTORY METHOD DESIGN PATTERN

#include <vector>
#include <string>
using namespace std;

#ifndef BUILDING_H
#define BUILDING_H

// #include "UtilState.h"
// class Visitor;  //TODO replace with //#include "Visitor.h"
class Citizen;  //TODO replace with //#include "Citizen.h"
// class UtilState;


class Building
{

public: 
    Building(int cost = 0, const std::string& type = "");

    void removeCitizen(Citizen* citizen);

    void addCitizen(Citizen* citizen);

    void consumeResources();

    void buy(Citizen* newOwner);

    // void accept(Visitor* v);

    virtual void construct() = 0;  // method to construct the building using BuildCommand

    std::string getBuildingType() const;

    virtual ~Building() {
        // delete buildingState;
        // currentOccupants.clear();
        // owner.clear();
    }

    private: 
    int cost;
    vector<Citizen*> currentOccupants;
    vector<Citizen*> owner;
    string type;
    // UtilState* buildingState;
};  

#endif //BUILDING_H
