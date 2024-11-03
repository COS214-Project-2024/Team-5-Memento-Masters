//FACTORY METHOD DESIGN PATTERN
// Concrete Factory

#include <string>
#include <vector>
using namespace std;

#include "TransportBuildingFactory.h"

TransportBuildingFactory::TransportBuildingFactory() {
        validTypes = {"Road", "TrainStation", "Airport"};
}

Building* TransportBuildingFactory::createBuilding(string type) {
    if (type == "Road") return new Road();
    if (type == "TrainStation") return new TrainStation();
    if (type == "Airport") return new Airport();
    return NULL;
}

    