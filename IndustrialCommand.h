#ifndef INDUSTRIALCOMMAND_H
#define INDUSTRIALCOMMAND_H
#include "Menu.h"

class IndustrialCommand : public MenuCommand {
public:
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

        switch (input){
            case 'a': 
                result = "Factory";
                break;
            case 'b':
                result = "Power Plant";
                break;
            default:
                return;
        }

        cout << indentation << "Enter coordinates (e.g., A1): ";
        string coord = "";
        cout << "\n" << indentation << "Enter your choice: ";
        cin >> coord;

        cout << "\n" << indentation << "Building " << result << " at " << coord << "\n";
        // Building logic here
        // TODO link to factory method
    }
    
    const char* getDescription() const override {
        return "Build Industrial Building";
    }
};

#endif // INDUSTRIALCOMMAND_H