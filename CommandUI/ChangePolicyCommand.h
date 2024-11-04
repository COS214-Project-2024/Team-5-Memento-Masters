#ifndef CHANGEPOLICYCOMMAND_H
#define CHANGEPOLICYCOMMAND_H
#include "Menu.h"

class ChangePolicyCommand : public MenuCommand {
public:
    ChangePolicyCommand(City* cityRef) : MenuCommand(cityRef){} 

    ~ChangePolicyCommand() override {}

    void execute(Menu* currentMenu) override {
        string result = "";
        string indentation(2 * 4, ' ');

        cout << "\n" << indentation << "=== Update Policy Menu ===:\n";
        cout << indentation << "Select Policy to Change:\n";
        cout << indentation << "a. Distance From Road\n";
        cout << indentation << "b. One child Policy\n";
        cout << indentation << "c. VISA requirement\n";
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
                result = "Child";
                break;
            case 'c':
                result = "VISA";
                break;
            default:
                return;
        }

        cout << "\n" << indentation << "Changing " << result << " policy\n";
        // Update policy logic
        // TODO policy update logic
    }
    
    const char* getDescription() const override {
        return "Update Policies";
    }
};

#endif // CHANGEPOLICYCOMMAND_H
