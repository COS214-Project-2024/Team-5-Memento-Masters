#ifndef TRANSPORTCOMMAND_H
#define TRANSPORTCOMMAND_H

#include "../FactoryMethod/TransportBuildingFactory.h"
#include "../FactoryMethod/Building.h"
#include "Menu.h"

class TransportCommand : public MenuCommand {
private:
    TransportBuildingFactory* factory;
public:
    TransportCommand(City* cityRef) : MenuCommand(cityRef){
        factory = new TransportBuildingFactory();
    } 

    ~TransportCommand() override {
        delete factory;
    }

    void execute(Menu* currentMenu) override {
        string result = "";
        string indentation(2 * 4, ' ');

        cout << "\n" << indentation << "=== Transport Build Menu ===:\n";
        cout << indentation << "Select Commercial structure to build:\n";
        cout << indentation << "a. Road\n";
        cout << indentation << "b. Train Station\n";
        cout << indentation << "c. Airport\n";
        cout << indentation << "d. Cancel\n";
        
        cout << indentation;
        char input;
        cout << "\n" << indentation << "Enter your choice: ";
        cin >> input;

        Building* newBuilding = nullptr;
        string buildingType;

        switch (input){
            case 'a': 
                buildingType = "Road";
                break;
            case 'b':
                buildingType = "Train Station";
                break;
            case 'c':
                buildingType = "Airport";
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
    
    const char* getDescription() const override {
        return "Build Transportation";
    }
};

#endif // TRANSPORTCOMMAND_H