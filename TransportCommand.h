#ifndef TRANSPORTCOMMAND_H
#define TRANSPORTCOMMAND_H
#include "Menu.h"

class TransportCommand : public MenuCommand {
public:
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

        switch (input){
            case 'a': 
                result = "Road";
                break;
            case 'b':
                result = "Train Station";
                break;
            case 'c':
                result = "Airport";
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
        return "Build Transportation";
    }
};

#endif // TRANSPORTCOMMAND_H