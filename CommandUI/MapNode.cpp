#include "MapNode.h"
using namespace std;

MapNode::MapNode(string type, Building* building) : tileType(type), buildingPtr(building) 
{
    if (tileType == "Grass") {
        displayChar = "\033[30;42m   \033[0m"; // Green background
    } else if (tileType == "House") {
        displayChar = "\033[33;100m H \033[0m";  // House
    } else if (tileType == "Apartment") {
        displayChar = "\033[33;100m A \033[0m";  // Apartment
    } else if (tileType == "Shop") {
        displayChar = "\033[33;100m S \033[0m";  // Shop
    } else if (tileType == "Mall") {
        displayChar = "\033[33;100m M \033[0m";  // Mall
    } else if (tileType == "Office") {
        displayChar = "\033[33;100m O \033[0m";  // Office
    } else if (tileType == "Park") {
        displayChar = "\033[30;42m P \033[0m";  // Park
    } else if (tileType == "Monument") {
        displayChar = "\033[33;100m T \033[0m";  // Monument(Tower/Trinute)
    } else if (tileType == "PowerPlant") {
        displayChar = "\033[33;100m E \033[0m";  // PowerPlant (Energy)
    } else if (tileType == "Factory") {
        displayChar = "\033[33;100m F \033[0m";  // Factory
    } else if (tileType == "Road") {
        displayChar = "\033[33;40m - \033[0m"; // Road
    } else if (tileType == "TrainStation") {
        displayChar = "\033[33;100m T \033[0m";  // TrainStation
    } else if (tileType == "Airport") {
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
    return tileType;
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
