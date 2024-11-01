#ifndef COMMERCIALCOMMAND_H
#define COMMERCIALCOMMAND_H
#include "Menu.h"

class CommercialCommand : public MenuCommand {
public:
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

        switch (input){
            case 'a': 
                result = "Shop";
                break;
            case 'b':
                result = "Mall";
                break;
            case 'c':
                result = "Office";
                break;
            default:
                return;
        }

        cout << indentation << "Enter coordinates (e.g., A1): ";
        string coord = "";
        cin >> coord;

        cout << "\n"  << indentation << "Building " << result << " at " << coord << "\n";
        // Building logic here
        // TODO link to factory method
    }
    
    const char* getDescription() const override {
        return "Build Commercial Building";
    }
};

#endif // COMMERCIALCOMMAND_H