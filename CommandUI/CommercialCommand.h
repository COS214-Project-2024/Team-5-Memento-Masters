#ifndef COMMERCIALCOMMAND_H
#define COMMERCIALCOMMAND_H

#include "../FactoryMethod/CommercialBuildingFactory.h"
#include "../FactoryMethod/Building.h"
#include "Menu.h"

class CommercialCommand : public MenuCommand {
private:
    CommercialBuildingFactory* factory;
public:
    CommercialCommand(City* cityRef) : MenuCommand(cityRef){
        factory = new CommercialBuildingFactory();
    } 

    ~CommercialCommand() override {
        delete factory;
    }

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

        if (!city->updateBudget(newBuilding->getCost())) {
            cout << "\n" << indentation << "Insufficient funds!\n";
            return;
        }
        
        if (newBuilding != nullptr) {
            // Add the building to the city at the specified coordinates
            city->constructBuilding(buildingType, coord, newBuilding);
            cout << "\n" << indentation << "Building " << buildingType << " at " << coord << "\n";
        } else {
            cout << "\n" << indentation << "Error: Failed to create building.\n";
        }
    }
    
    const char* getDescription() const override {
        return "Build Commercial Building";
    }
};

#endif // COMMERCIALCOMMAND_H