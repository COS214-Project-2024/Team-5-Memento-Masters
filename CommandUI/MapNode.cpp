#include "MapNode.h"
using namespace std;

MapNode::MapNode(string type, Building* building) : nodeType(type), buildingPtr(building) 
{
    if (nodeType == "Grass") {
        displayChar = "\033[30;42m   \033[0m"; // Green background
    } else if (nodeType == "House") {
        displayChar = "\033[33;100m H \033[0m";  // House
    } else if (nodeType == "Apartment") {
        displayChar = "\033[33;100m A \033[0m";  // Apartment
    } else if (nodeType == "Shop") {
        displayChar = "\033[33;100m S \033[0m";  // Shop
    } else if (nodeType == "Mall") {
        displayChar = "\033[33;100m M \033[0m";  // Mall
    } else if (nodeType == "Office") {
        displayChar = "\033[33;100m O \033[0m";  // Office
    } else if (nodeType == "Park") {
        displayChar = "\033[30;42m P \033[0m";  // Park
    } else if (nodeType == "Monument") {
        displayChar = "\033[33;100m T \033[0m";  // Monument(Tower/Trinute)
    } else if (nodeType == "PowerPlant") {
        displayChar = "\033[33;100m E \033[0m";  // PowerPlant (Energy)
    } else if (nodeType == "Factory") {
        displayChar = "\033[33;100m F \033[0m";  // Factory
    } else if (nodeType == "Road") {
        displayChar = "\033[33;40m - \033[0m"; // Road
    } else if (nodeType == "TrainStation") {
        displayChar = "\033[33;100m T \033[0m";  // TrainStation
    } else if (nodeType == "Airport") {
        displayChar = "\033[33;100m A \033[0m";  // Airport
    } else {
        displayChar = "\033[0m ? \033[0m"; // Default (unrecognized type)
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
