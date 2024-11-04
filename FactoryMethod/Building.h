#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <string>

class Building {
protected:
    std::string buildingType;  // Stores the type of building

public:
    virtual ~Building() = default;
    virtual void construct() = 0;  // Pure virtual method to construct the building
    void accept(BuildingReport *v);
    std::string getBuildingType() const {
        return buildingType;
    }
};

#endif // BUILDING_H
