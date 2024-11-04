
#include <vector>
#include "Building.h"
#include "../Visitor/BuildingReport.h" // Include the definition of BuildingReport

using namespace std;

void Building::removeCitizen(Citizen* citizen) {
    throw "Not yet implemented";
}

void Building::addCitizen(Citizen* citizen) {
    throw "Not yet implemented";
}

void Building::consumeResources() {
    throw "Not yet implemented";
}

void Building::buy(Citizen* newOwner) {
    throw "Not yet implemented";
}

void Building::accept(BuildingReport* v) {
    v->visit(this);
}

void Building::accept(Visitor* v) {
    throw "Not yet implemented";
}

int Building::getCost() {
    return cost;
}


