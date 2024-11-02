#include "City.h"
#include <iostream>
#include <iomanip>
using namespace std;

City::City(int width, int height, string name){
// Initialize map with default nodes for demonstration
    this->name = name;
    map.resize(height, vector<MapNode>(width, MapNode("Grass")));
    map[0][0] = MapNode("Road");
    // map[2][0] = MapNode("Road");
    // map[2][1] = MapNode("Road");
    // map[2][2] = MapNode("Road");
    // map[2][3] = MapNode("Road");
    // map[2][4] = MapNode("Road");
    // map[0][2] = MapNode("Road");
    // map[1][2] = MapNode("Road");
    // map[3][2] = MapNode("Road");
    // map[4][2] = MapNode("Road");
    // map[0][0] = MapNode("Building");
    // map[1][0] = MapNode("Building");
    // map[0][1] = MapNode("Building");
    // map[1][1] = MapNode("Building");
    // map[1][4] = MapNode("Building");
}

void City::printMap() {
    // Print the top coordinates
    std::cout << "   ";
    for (char colLabel = 'A'; colLabel < 'A' + map[0].size(); ++colLabel) {
        std::cout << "  " << colLabel << "   ";
    }
    std::cout << std::endl;

    // Print the map with row coordinates
    for (size_t rowIndex = 0; rowIndex < map.size(); ++rowIndex) {
        std::cout << "   ";
        for (size_t i = 0; i < map[rowIndex].size(); ++i) {
            std::cout << "----- ";
        }
        std::cout << std::endl;

        std::cout << std::setw(2) << rowIndex + 1 << " "; // Row index with padding

        // Print each MapNode in the row
        for (const auto& node : map[rowIndex]) {
            std::cout << "|" << node.printNode() << "| ";
        }
        std::cout << std::endl; 
    }
    std::cout << "   ";
    for (size_t i = 0; i < map[0].size(); ++i) {
        std::cout << "----- ";
    }
    std::cout << std::endl;
}

void City::constructBuilding(string buildingType, string coord){
    if (coord.length() < 2) {
        throw invalid_argument("Invalid coordinate format.");
    }

    char colLetter = coord[0];
    int colIndex = toupper(colLetter) - 'A';

    int rowIndex = stoi(coord.substr(1)) - 1;

    if (rowIndex < 0 || rowIndex >= map.size() || colIndex < 0 || colIndex >= map[0].size()) {
        throw out_of_range("Coordinates are out of map bounds.");
    }

    map[rowIndex][colIndex] = MapNode(buildingType);
}