#ifndef LANDMARKCOMMAND_H
#define LANDMARKCOMMAND_H

#include "../FactoryMethod/LandmarkBuildingFactory.h"
#include "../FactoryMethod/Building.h"
#include "Menu.h"

/**
 * @class LandmarkCommand
 * @brief Command to build landmark buildings.
 * 
 * This command allows the user to build landmark structures such as parks and monuments.
 */
class LandmarkCommand : public MenuCommand {
private:
    LandmarkBuildingFactory* factory; ///< Factory to create landmark buildings
public:
    /**
     * @brief Construct a new Landmark Command object
     * 
     * @param cityRef Reference to the City object
     */
    LandmarkCommand(City* cityRef) : MenuCommand(cityRef){
        factory = new LandmarkBuildingFactory();
    } 

    /**
     * @brief Destroy the Landmark Command object
     */
    ~LandmarkCommand() override {
        delete factory;
    }

    /**
     * @brief Execute the Landmark build command
     * 
     * @param currentMenu  Pointer to the current menu
     */
    void execute(Menu* currentMenu) override {
        string result = "";
        string indentation(2 * 4, ' ');
        
        cout << "\n" << indentation << "=== Landmark Build Menu ===:\n";
        cout << indentation << "Select Landmark structure to build:\n";
        cout << indentation << "a. Park\n";
        cout << indentation << "b. Monument\n";
        cout << indentation << "c. Cancel\n";

        cout << indentation;
        char input;
        cout << "\n" << indentation << "Enter your choice: ";
        cin >> input;

        Building* newBuilding = nullptr;
        string buildingType;

        switch (input){
            case 'a': 
                buildingType = "Park";
                break;
            case 'b':
                buildingType = "Monument";
                break;
            default:
                return;
        }

        cout << indentation << "Enter coordinates (e.g., A1): ";
        string coord = "";
        cin >> coord;

        string check = city->checkCoord(coord);

        if (check != ""){
           cout << "\n" << indentation << check << "\n";
           return;
        }

        char colLetter = coord[0];
        int colIndex = toupper(colLetter) - 'A';

        int rowIndex = stoi(coord.substr(1)) - 1;

        newBuilding = factory->createBuilding(buildingType);
        double value = newBuilding->getCost();
        double cost = -value;

        if (!city->updateBudget(cost)) {
            cout << "\n" << indentation << "Insufficient funds!\n";
            return;
        }

        city->updateEstimatedBuildValue(value);
        
        if (newBuilding != nullptr) {
            // Add the building to the city at the specified coordinates
            city->constructBuilding(buildingType, coord, newBuilding);
            cout << "\n" << indentation << "Building " << buildingType << " at " << coord << "\n";
        } else {
            cout << "\n" << indentation << "Error: Failed to create building.\n";
        }
    }
    
    /**
     * @brief Get the description of the command.
     * 
     * @return const char* Description of the command.
     */
    const char* getDescription() const override {
        return "Build Landmark Building";
    }
};

#endif // LANDMARKCOMMAND_H