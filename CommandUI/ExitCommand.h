#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H
#include "Menu.h"

/**
 * @class ExitCommand
 * @brief Command to Exit the simulation
 * 
 * This command allows the user to exit the simulation
 */
class ExitCommand : public MenuCommand {
public:
    /**
     * @brief Construct a new Exit Command object
     * 
     * @param cityRef Reference to the City object
     */
    ExitCommand(City* cityRef) : MenuCommand(cityRef){} 

    /**
     * @brief Destroy the Exit Command object
     */
    ~ExitCommand() override {}

    /**
     * @brief Execute the exit command
     * 
     * @param currentMenu Pointer to the current menu
     */
    void execute(Menu* currentMenu) override {
        cout << "Exiting the program...\n";
        currentMenu->exit(); 
    }
    
    /**
     * @brief Get the Description of the command
     * 
     * @return const char* Description of the command
     */
    const char* getDescription() const override {
        return "Exit Simulation";
    }
};

#endif // EXITCOMMAND_H
