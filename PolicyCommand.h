#ifndef POLICYCOMMAND_H
#define POLICYCOMMAND_H
#include "Menu.h"
#include "TaxCommand.h"
#include "ChangePolicyCommand.h"

class PolicyCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        Menu policyMenu("Policy Menu", currentMenu, 1);
        // TODO : add policy related commands

        policyMenu.addCommand(std::make_shared<TaxCommand>());
        policyMenu.addCommand(std::make_shared<ChangePolicyCommand>());
        
        policyMenu.execute();
    }
    
    const char* getDescription() const override {
        return "Change Policy/Tax";
    }
};
#endif // POLICYCOMMAND_H
