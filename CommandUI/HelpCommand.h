#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H
#include "Menu.h"

/**
 * @class HelpCommand
 * @brief Command to display help menu
 * 
 * This command allows the user to display the help menu
 */
class HelpCommand : public MenuCommand {
public:
    /**
     * @brief Construct a new Help Command object
     * 
     * @param cityRef Reference to the City object
     */
    HelpCommand(City* cityRef) : MenuCommand(cityRef){} 

    /**
     * @brief Destroy the Help Command object
     */
    ~HelpCommand() override {}

    /**
     * @brief Execute the help command
     * 
     * @param currentMenu Pointer to the current menu
     */
    void execute(Menu* currentMenu) override {
        Menu helpMenu("Help Menu", currentMenu);
        cout << "=== Help Menu ===\n";
        cout << "\033[30;42m   \033[0m = Grass (Default)\n"; 
        cout << "\033[30;46m H \033[0m = House\n";
        cout << "\033[30;45m A \033[0m = Apartment\n";
        cout << "\033[30;43m S \033[0m = Shop\n";
        cout << "\033[35;100m M \033[0m = Mall\n";
        cout << "\033[36;100m O \033[0m = Office\n";
        cout << "\033[32;42m P \033[0m = Park\n";
        cout << "\033[37;100m T \033[0m = Monument (Tower/Tribute)\n";
        cout << "\033[1;33;100m E \033[0m = PowerPlant (Energy)\n";
        cout << "\033[1;31;100m F \033[0m = Factory\n";
        cout << "\033[1;37;40m - \033[0m = Road\n";
        cout << "\033[1;32;100m T \033[0m = TrainStation\n";
        cout << "\033[1;34;100m A \033[0m = Airport\n";
        cout << "\033[0m ? \033[0m = Unrecognized type\n";

        helpMenu.execute();   
    }
    
    /**
     * @brief Get the Description of the command
     * 
     * @return const char* Description of the command
     */
    const char* getDescription() const override {
        return "Get Help";
    }
};
#endif