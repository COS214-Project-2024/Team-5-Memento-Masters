#ifndef BUILDING_H
#define BUILDING_H

#include <vector>
#include <string>

// Forward declarations to avoid circular dependencies
class Citizen;
class Visitor;
class BuildingReport;
class UtilState;

using namespace std;

class Building {
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
    void accept(BuildingReport* v);

    int getCost();

    virtual ~Building() {
        // delete buildingState;
        // currentOccupants.clear();
        // owner.clear();
    }
};

#endif // BUILDING_H
