#ifndef MAPNODE_H
#define MAPNODE_H

#include <string>
#include "../FactoryMethod/Building.h"

/**
 * @class MapNode
 * @brief Class representing a node in the map
 * 
 * This class represents a node in the map. It can be a building or a path.
 */
class MapNode
{
private:
    Building* buildingPtr; ///< Pointer to the building object
    std::string nodeType; ///< Type of the node
    std::string displayChar; ///< Character to display the node

public:
    /**
     * @brief Constructor for MapNode
     * @param type Type of the node
     * @param building Pointer to the building object
     */
    MapNode(std::string type, Building* building = nullptr);

    /**
     * @brief Destructor
     */
    ~MapNode();

    /**
     * @brief Gets the building object
     * @return Pointer to the building object
     */
    Building* getBuilding() const;

    /**
     * @brief Sets the building object
     * @param newBuilding Pointer to the new building object
     */
    void setBuilding(Building* newBuilding);

    /**
     * @brief Clears the building object
     */
    void clearBuilding();

    /**
     * @brief Gets the type of the node
     * @return The type of the node
     */
    std::string getType() const;

    /**
     * @brief Gets the character to display the node
     * @return The character to display the node
     */
    std::string printNode() const;
};

#endif //MAPNODE_H
