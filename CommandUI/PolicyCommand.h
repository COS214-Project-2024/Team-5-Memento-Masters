#ifndef POLICYCOMMAND_H
#define POLICYCOMMAND_H
#include "Menu.h"
#include "TaxCommand.h"
#include "ChangePolicyCommand.h"

class PolicyCommand : public MenuCommand {
public:
    PolicyCommand(City* cityRef) : MenuCommand(cityRef){} 

    ~PolicyCommand() override {}
    
    void execute(Menu* currentMenu) override {
        Menu policyMenu("Policy Menu", currentMenu, 1);
        // TODO : add policy related commands

        policyMenu.addCommand(std::make_shared<TaxCommand>(city));
        policyMenu.addCommand(std::make_shared<ChangePolicyCommand>(city));
        
        policyMenu.execute();
    }
    
    const char* getDescription() const override {
        return "Change Policy/Tax";
    }
};
#endif // POLICYCOMMAND_H
