#include <vector>
using namespace std;

#include "Building.h"

Building::Building(int cost, const std::string& type) : cost(cost), type(type) {}

std::string Building::getBuildingType() const {
       return type;
}


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

// void Building::accept(Visitor* v) {
// 	throw "Not yet implemented";
// }

// virtual ~Building() {
//         // delete buildingState;
//         // currentOccupants.clear();
//         // owner.clear();
//     }
