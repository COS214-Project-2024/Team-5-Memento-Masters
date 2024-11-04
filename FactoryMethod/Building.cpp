
#include <vector>
using namespace std;

#include "Building.h"

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

int Building::getCost(){
    return cost;
}
