#include <iostream>
#include <vector>
#include "ResidentialBuildingFactory.h"
#include "CommercialBuildingFactory.h"
#include "IndustrialBuildingFactory.h"
#include "LandmarkBuildingFactory.h"

struct BuildingWithCoordinates {
    Building* building;  // Pointer to a building
    int x;  // X-coordinate
    int y;  // Y-coordinate
};

int main() {
    // Create the factories
    ResidentialBuildingFactory residentialFactory;
    CommercialBuildingFactory commercialFactory;
    IndustrialBuildingFactory industrialFactory;
    LandmarkBuildingFactory landmarkFactory;

    // Create a 2D vector to store buildings with their coordinates
    std::vector<std::vector<BuildingWithCoordinates>> buildingGrid(3, std::vector<BuildingWithCoordinates>(3));

    // List of all building factories for convenience
    std::vector<BuildingFactory*> factories = {
        &residentialFactory, &commercialFactory, &industrialFactory, &landmarkFactory
    };

    int buildingCount = 0;

    // Populate the 2D grid with buildings and coordinates (for this example, max 9 buildings)
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            // Create buildings in a round-robin fashion using the factories
            Building* newBuilding = factories[buildingCount % factories.size()]->createBuilding();
            
            // Store the building and its coordinates
            buildingGrid[i][j] = { newBuilding, i, j };
            
            buildingCount++;
            
            if (buildingCount >= 9) break;  // Limit to 9 buildings
        }
    }

    // Print the building type and its coordinates
    std::cout << "Buildings and their coordinates:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            BuildingWithCoordinates& entry = buildingGrid[i][j];
            std::cout << "Building Type: " << entry.building->getBuildingType()
                      << ", Coordinates: (" << entry.x << ", " << entry.y << ")\n";
        }
    }

    // Clean up memory
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            delete buildingGrid[i][j].building;  // Free the memory
        }
    }

    return 0;
}
