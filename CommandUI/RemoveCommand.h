#ifndef REMOVECOMMAND_H
#define REMOVECOMMAND_H

#include "Menu.h"
#include <iostream>

class RemoveCommand : public MenuCommand {
public:
    RemoveCommand(City* cityRef) : MenuCommand(cityRef) {}

    void execute(Menu* currentMenu) override {
        string indentation(2 * 4, ' ');

        cout << "\n" << indentation << "=== Remove Building ===:\n";
    
        cout << "\nCurrent map layout:\n";
        city->printMap();
        
        cout << indentation << "Enter coordinates of building to remove (e.g., A1)\n";
        cout << indentation << "Or enter 'c' to cancel: ";
        
        string input;
        cin >> input;

        if (input == "c" || input == "C") {
            cout << indentation << "Operation cancelled.\n";
            return;
        }

        if (input.length() < 2) {
            cout << "\n" << indentation << "Error: Invalid coordinate format. Must be a letter followed by a number (e.g., A1)\n";
            return;
        }

        string check = city->checkCoord(input, true);
        if (check != "") {
            cout << indentation << check << "\n";
            return;
        }

        try {
            char colLetter = input[0];
            int colIndex = toupper(colLetter) - 'A';
            int rowIndex = stoi(input.substr(1)) - 1;

            if (!city->hasBuildingAt(rowIndex, colIndex)) {
                cout << "\n" << indentation << "Error: No building exists at these coordinates.\n";
                return;
            }

            string buildingType = city->getBuildingTypeAt(rowIndex, colIndex);
            
            if (city->demolishBuilding(input)) {
                cout << "\n" << indentation << "Successfully removed " << buildingType << " at " << input << "\n";
            } else {
                cout << "\n" << indentation << "Error: Failed to remove building.\n";
            }

        } catch (const std::invalid_argument& e) {
            cout << "\n" << indentation << "Error: Invalid coordinate format. Row number must be a valid number.\n";
        } catch (const std::out_of_range& e) {
            cout << "\n" << indentation << "Error: Row number is out of range.\n";
        }
    }
    
    const char* getDescription() const override {
        return "Remove Building";
    }
};

#endif // REMOVECOMMAND_H