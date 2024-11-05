#ifndef CHANGEPOLICYCOMMAND_H
#define CHANGEPOLICYCOMMAND_H
#include "Menu.h"

/**
 * @class ChangePolicyCommand
 * @brief Command to change city policies.
 * 
 * This command allows the user to change city policies 
 */
class ChangePolicyCommand : public MenuCommand {
public:
    /**
     * @brief Construct a new Change Policy Command object
     * 
     * @param cityRef 
     */
    ChangePolicyCommand(City* cityRef) : MenuCommand(cityRef){} 

    /**
     * @brief Destroy the Change Policy Command object
     */
    ~ChangePolicyCommand() override {}

    /**
     * @brief Execute the Change Policy command
     * 
     * @param currentMenu Pointer to the current menu
     */
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
    
    /**
     * @brief Get the Description of the command
     * 
     * @return const char* Description of the command
     */
    const char* getDescription() const override {
        return "Update Policies";
    }
};

#endif // CHANGEPOLICYCOMMAND_H
