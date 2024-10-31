#include "MapNode.h"
using namespace std;

MapNode::MapNode(string type) : tileType(type)
{
    if (tileType == "Grass") {
        displayChar = "\033[30;42m   \033[0m"; // Green background
    } else if (tileType == "Building") {
        displayChar = "\033[33;100m H \033[0m"; // Yellow on gray background
    } else if (tileType == "Road") {
        displayChar = "\033[33;40m - \033[0m"; // Yellow on black background
    } else {
        displayChar = "\033[0m ? \033[0m"; // Default (unrecognized type)
    }
}

MapNode::~MapNode()
{
}

string MapNode::printNode() const{
    return displayChar;
}
