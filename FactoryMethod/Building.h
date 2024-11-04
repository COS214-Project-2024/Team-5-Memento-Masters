#ifndef BUILDING_H
#define BUILDING_H

#include <vector>
#include <string>

using namespace std;

class Visitor;
class Citizen;
class UtilState;
class BuildingReport;

/**
 * @class Building
 * @brief Abstract base class for buildings.
 */
class Building {
private:
    int cost; ///< Cost of the building.
    vector<Citizen*> currentOccupants; ///< Current occupants of the building.
    vector<Citizen*> owner; ///< Owners of the building.
    string type; ///< Type of the building.
    UtilState* buildingState; ///< State of the building.

public:
    /**
     * @brief Constructor for Building.
     * @param cost Cost of the building.
     * @param type Type of the building.
     */
    Building(int cost = 0, const std::string& type = "") : cost(cost), type(type) {}

    /**
     * @brief Removes a citizen from the building.
     * @param citizen Pointer to the citizen to remove.
     */
    void removeCitizen(Citizen* citizen);

    /**
     * @brief Adds a citizen to the building.
     * @param citizen Pointer to the citizen to add.
     */
    void addCitizen(Citizen* citizen);

    /**
     * @brief Consumes resources for the building.
     */
    void consumeResources();

    /**
     * @brief Buys the building for a new owner.
     * @param newOwner Pointer to the new owner.
     */
    void buy(Citizen* newOwner);

    /**
     * @brief Accepts a visitor to perform operations on the building.
     * @param v Pointer to the Visitor.
     */
    void accept(Visitor* v);

    /**
     * @brief Accepts a building report visitor to generate a report.
     * @param v Pointer to the BuildingReport visitor.
     */
    void accept(BuildingReport* v);

    /**
     * @brief Gets the cost of the building.
     * @return The cost of the building.
     */
    int getCost();

    /**
     * @brief Destructor for Building.
     */
    virtual ~Building() {
        // delete buildingState;
        // currentOccupants.clear();
        // owner.clear();
    }
};

#endif // BUILDING_H
