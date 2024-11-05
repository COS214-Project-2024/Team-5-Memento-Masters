#ifndef COMMERCIALCOMMAND_H
#define COMMERCIALCOMMAND_H

#include "../FactoryMethod/CommercialBuildingFactory.h"
#include "../FactoryMethod/Building.h"
#include "Menu.h"

/**
 * @class CommercialCommand
 * @brief Command to build commercial buildings.
 * 
 *  This command allows the user to build commercial structures such as shops
 */
class CommercialCommand : public MenuCommand {
private:
    CommercialBuildingFactory* factory; ///< Factory to create commercial buildings
public:
    /**
     * @brief Construct a new Commercial Command object
     * 
     * @param cityRef Reference to the City object
     */
    CommercialCommand(City* cityRef) : MenuCommand(cityRef){
        factory = new CommercialBuildingFactory();
    } 

    /**
     * @brief Destroy the Commercial Command object
     */
    ~CommercialCommand() override {
        delete factory;
    }

    /**
     * @brief Execute the Commercial build command
     * 
     * @param currentMenu  Pointer to the current menu
     */
    void execute(Menu* currentMenu) override {
        string result = "";
        string indentation(2 * 4, ' ');

        cout << "\n" << indentation << "=== Commercial Build Menu ===:\n";
        cout << indentation << "Select Commercial structure to build:\n";
        cout << indentation << "a. Shop\n";
        cout << indentation << "b. Mall\n";
        cout << indentation << "c. Office\n";
        cout << indentation << "d. Cancel\n";
        
        cout << indentation;
        char input;
        cout << "\n" << indentation << "Enter your choice: ";
        cin >> input;

        Building* newBuilding = nullptr;
        string buildingType;

        switch (input){
            case 'a': 
                buildingType = "Shop";
                break;
            case 'b':
                buildingType = "Mall";
                break;
            case 'c':
                buildingType = "Office";
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
     * @brief Get the Description of the command
     * 
     * @return const char* Description of the command
     */
    const char* getDescription() const override {
        return "Build Commercial Building";
    }
};

#endif // COMMERCIALCOMMAND_H