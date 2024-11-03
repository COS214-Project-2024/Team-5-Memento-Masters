// FACTORY METHOD DESIGN PATTERN
// Concrete Factory

#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "ResidentialBuildingFactory.h"

ResidentialBuildingFactory::ResidentialBuildingFactory() {
        validTypes = {"House", "Apartment"};
    }


Building* ResidentialBuildingFactory::createBuilding(string type) {
        if (type == "House") return new House();
        if (type == "Apartment") return new Apartment();
        return NULL;
    }
