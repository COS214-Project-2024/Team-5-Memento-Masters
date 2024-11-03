//FACTORY METHOD DESIGN PATTERN
// Concrete Factory

#include <string>
#include <vector>

#include "CommercialBuildingFactory.h"


CommercialBuildingFactory::CommercialBuildingFactory() {
        validTypes = {"Shop", "Mall", "Office"};
}
    
Building* CommercialBuildingFactory::createBuilding(string type) {
        if (type == "Shop") return new Shop();
        if (type == "Mall") return new Mall();
        if (type == "Office") return new Office();
        return NULL;
}

// CommercialBuildingFactory::~CommercialBuildingFactory() {

// }
