#ifndef RESIDENTIALCOMMAND_H
#define RESIDENTIALCOMMAND_H
#include "Menu.h"

class ResidentialCommand : public MenuCommand {
public:
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

        switch (input){
            case 'a': 
                result = "House";
                break;
            case 'b':
                result = "Apartment";
                break;
            default:
                return;
        }

        cout << indentation << "Enter coordinates (e.g., A1): ";
        string coord = "";
        cin >> coord;

        cout << "\n" << indentation << "Building " << result << " at " << coord << "\n";
        // Building logic here
        // TODO link to factory method
    }
    
    const char* getDescription() const override {
        return "Build Residential Building";
    }
};

#endif // RESIDENTIALCOMMAND_H
