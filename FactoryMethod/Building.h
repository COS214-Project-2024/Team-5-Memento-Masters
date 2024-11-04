#include "Visitor/BuildingReport.h"
#include <vector>
#include <string>
using namespace std;

#ifndef BUILDING_H
#define BUILDING_H

#include "UtilState.h"
class Visitor;  //TODO replace with //#include "Visitor.h"
class Citizen;  //TODO replace with //#include "Citizen.h"
class UtilState;


class Building
{
private: 
    int cost;
    vector<Citizen*> currentOccupants;
    vector<Citizen*> owner;
    string type;
    UtilState* buildingState;

public: 
    Building(int cost = 0, const std::string& type = "") : cost(cost), type(type) {}

    void removeCitizen(Citizen* citizen);

    void addCitizen(Citizen* citizen);

    void consumeResources();

    void buy(Citizen* newOwner);

    void accept(Visitor* v);

    int getCost();

    void accept(BuildingReport* v);

    virtual ~Building() {
        // delete buildingState;
        // currentOccupants.clear();
        // owner.clear();
    }
};  

#endif //BUILDING_H
