#ifndef INDUSTRIALCOMMAND_H
#define INDUSTRIALCOMMAND_H

#include "../FactoryMethod/IndustrialBuildingFactory.h"
#include "../FactoryMethod/Building.h"
#include "Menu.h"

/**
 * @class IndustrialCommand
 * @brief Command to build industrial buildings.
 * 
 * This command allows the user to build industrial structures such as factories
 * and power plants.
 */
class IndustrialCommand : public MenuCommand {
private:
    IndustrialBuildingFactory* factory; ///< Factory to create industrial buildings
public:
    /**
     * @brief Construct a new Industrial Command object
     * 
     * @param cityRef Reference to the City object
     */
    IndustrialCommand(City* cityRef) : MenuCommand(cityRef){
        factory = new IndustrialBuildingFactory();
    } 

    /**
     * @brief Destroy the Industrial Command object
     */
    ~IndustrialCommand() override {
        delete factory;
    }

    /**
     * @brief Execute the Industrial build command
     * 
     * @param currentMenu  Pointer to the current menu
     */
    void execute(Menu* currentMenu) override {
        string result = "";
        string indentation(2 * 4, ' ');
        
        cout << "\n" << indentation << "=== Industrial Build Menu ===:\n";
        cout << indentation << "Select Industrial structure to build:\n";
        cout << indentation << "a. Factory\n";
        cout << indentation << "b. Power Plant\n";
        cout << indentation << "c. Cancel\n";

        cout << indentation;
        char input;
        cin >> input;

        Building* newBuilding = nullptr;
        string buildingType;

        switch (input){
            case 'a': 
                buildingType = "Factory";
                break;
            case 'b':
                buildingType = "Power Plant";
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
        return "Build Industrial Building";
    }
};

#endif // INDUSTRIALCOMMAND_H