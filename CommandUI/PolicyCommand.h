#ifndef POLICYCOMMAND_H
#define POLICYCOMMAND_H
#include "Menu.h"
#include "TaxCommand.h"
#include "ChangePolicyCommand.h"

/**
 * @class PolicyCommand
 * @brief Class representing the policy command
 * 
 * This class represents the policy command. It allows the user to change the city's policies.
 */
class PolicyCommand : public MenuCommand {
public:
    /**
     * @brief Construct a new PolicyCommand object.
     * 
     * @param cityRef Reference to the City object.
     */
    PolicyCommand(City* cityRef) : MenuCommand(cityRef){} 

    /**
     * @brief Destroy the PolicyCommand object.
     */
    ~PolicyCommand() override {}
    
    /**
     * @brief Execute the policy change command.
     * 
     * @param currentMenu Pointer to the current menu.
     */
    void execute(Menu* currentMenu) override {
        Menu policyMenu("Policy Menu", currentMenu, 1);
        // TODO : add policy related commands

        policyMenu.addCommand(std::make_shared<TaxCommand>(city));
        policyMenu.addCommand(std::make_shared<ChangePolicyCommand>(city));
        
        policyMenu.execute();
    }
    
    /**
     * @brief Get the description of the command.
     * 
     * @return The description of the command.
     */
    const char* getDescription() const override {
        return "Change Policy/Tax";
    }
};
#endif // POLICYCOMMAND_H
