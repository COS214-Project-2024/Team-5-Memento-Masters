//TESTING COMMAND DESIGN PATTERN (AdjustTaxCommand) AND SINGLETON DESIGN PATTERN (TaxSystem)

#include <iostream>
#include "CommandManager.h"
#include "AdjustTaxCommand.h"
#include "TaxSystem.h"

int main() {

    std::cout << "\n====================================START TESTING ADJUSTTAXCOMMAND=============================================\n";
    TaxSystem* taxSystem = TaxSystem::getInstance(); // Get the singleton instance of TaxSystem
    CommandManager commandManager; // Create the CommandManager

    // Display initial tax rate
    std::cout << "\nTest 1: Display initial tax rate: \n";
    taxSystem->displayTaxRate();

    // Create and add a command to adjust the tax rate to 7%
    std::cout << "\nTest 2: Adjust the tax rate to 7%: \n";
    Command* adjustTaxTo7 = new AdjustTaxCommand(taxSystem, 0.07f);
    commandManager.addCommand(adjustTaxTo7);
    // Execute commands
    commandManager.executeCommands();

    // Create and add a command to adjust the tax rate to 10%
    std::cout << "\nTest 3: Adjust and display new tax rate: \n";
    Command* adjustTaxTo10 = new AdjustTaxCommand(taxSystem, 0.10f);
    commandManager.addCommand(adjustTaxTo10);
    // Execute commands
    commandManager.executeCommands();

    // Undo last command (should revert to 7%)
    std::cout << "\nTest: Undo last command and display result: \n";
    commandManager.undoLastCommand();

    // Undo last command (should revert to initial rate of 5%)
    std::cout << "\nTest: Undo last command and display result: \n";
    commandManager.undoLastCommand();

    std::cout << "\n===================================END OF TESTING FOR ADJUSTTAXCOMMAND=========================================\n";
    return 0;
}


