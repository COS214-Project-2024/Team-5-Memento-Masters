#ifndef RESIDENTIALCOMMAND_H
#define RESIDENTIALCOMMAND_H

#include "../FactoryMethod/ResidentialBuildingFactory.h"
#include "../FactoryMethod/Building.h"
#include "Menu.h"

class ResidentialCommand : public MenuCommand {
private:
    ResidentialBuildingFactory* factory;
public:
    ResidentialCommand(City* cityRef) : MenuCommand(cityRef){
        factory = new ResidentialBuildingFactory();
    } 

    ~ResidentialCommand() override {
        delete factory;
    }

    void execute(Menu* currentMenu) override {
        string result = "";
        string indentation(2 * 4, ' ');

        cout << "\n" << indentation << "=== Residential Build Menu ===:\n";
        cout << indentation << "Select Residential structure to build:\n";
        cout << indentation << "a. House\n";
        cout << indentation << "b. Apartment\n";
        cout << indentation << "c. Cancel\n";
        
        cout << indentation;
        char input;
        cout << "\n" << indentation << "Enter your choice: ";
        cin >> input;

        Building* newBuilding = nullptr;
        string buildingType;

        switch (input){
            case 'a': 
                buildingType = "House";
                break;
            case 'b':
                buildingType = "Apartment";
                break;
            default:
                return;
        }

        cout << indentation << "Enter coordinates (e.g., A1): ";
        string coord = "";
        cin >> coord;

        newBuilding = factory->createBuilding(buildingType);

        if (newBuilding != nullptr) {
            // Add the building to the city at the specified coordinates
            city->constructBuilding(buildingType, coord);
            cout << "\n" << indentation << "Building " << buildingType << " at " << coord << "\n";
        } else {
            cout << "\n" << indentation << "Error: Failed to create building.\n";
        }
    }
    
    const char* getDescription() const override {
        return "Build Residential Building";
    }
};

#endif // RESIDENTIALCOMMAND_H
