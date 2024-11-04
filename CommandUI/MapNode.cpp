#include "MapNode.h"
using namespace std;

MapNode::MapNode(string type, Building* building) : nodeType(type), buildingPtr(building) 
{
    if (nodeType == "Grass") {
        displayChar = "\033[30;42m   \033[0m"; // Green background for Grass
    } else if (nodeType == "House") {
        displayChar = "\033[30;46m H \033[0m";  // Light Blue for House
    } else if (nodeType == "Apartment") {
        displayChar = "\033[30;45m A \033[0m";  // Light Purple for Apartment
    } else if (nodeType == "Shop") {
        displayChar = "\033[30;43m S \033[0m";  // Light Yellow for Shop
    } else if (nodeType == "Mall") {
        displayChar = "\033[35;100m M \033[0m";  // Bright Magenta for Mall
    } else if (nodeType == "Office") {
        displayChar = "\033[36;100m O \033[0m";  // Bright Cyan for Office
    } else if (nodeType == "Park") {
        displayChar = "\033[32;42m P \033[0m";  // Green with bold border for Park
    } else if (nodeType == "Monument") {
        displayChar = "\033[37;100m T \033[0m";  // Bold White for Monument
    } else if (nodeType == "PowerPlant") {
        displayChar = "\033[1;33;100m E \033[0m";  // Bold Yellow on Dark Gray for PowerPlant
    } else if (nodeType == "Factory") {
        displayChar = "\033[1;31;100m F \033[0m";  // Bold Red for Factory
    } else if (nodeType == "Road") {
        displayChar = "\033[1;37;40m - \033[0m"; // Bold White on Dark Gray for Road
    } else if (nodeType == "TrainStation") {
        displayChar = "\033[1;32;100m T \033[0m";  // Bold Green for TrainStation
    } else if (nodeType == "Airport") {
        displayChar = "\033[1;34;100m A \033[0m";  // Bold Blue for Airport
    } else {
        displayChar = "\033[0m ? \033[0m"; // Default White for unrecognized types
    }

}

MapNode::~MapNode()
{
    if (buildingPtr != nullptr){
        delete buildingPtr;
    }
}

string MapNode::printNode() const{
    return displayChar;
}

string MapNode::getType() const{
    return nodeType;
}

Building* MapNode::getBuilding() const{
    return buildingPtr;
}

void MapNode::setBuilding(Building* newBuilding) {
    delete buildingPtr;
    buildingPtr = newBuilding;
}

void MapNode::clearBuilding() {
    if (buildingPtr != nullptr){
        delete buildingPtr;
    }
    
    buildingPtr = nullptr;
}
