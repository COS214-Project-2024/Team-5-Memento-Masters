#ifndef POLICYCOMMAND_H
#define POLICYCOMMAND_H
#include "Menu.h"



class PolicyCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        Menu policyMenu("Policy Menu", currentMenu);
        // TODO : add policy related commands
        // policyMenu.addCommand(std::make_shared<TaxRateCommand>());
        // policyMenu.addCommand(std::make_shared<PropertyTaxCommand>());
        // policyMenu.addCommand(std::make_shared<SalesTaxCommand>());
        // policyMenu.addCommand(std::make_shared<PolicySettingsCommand>());
        
        policyMenu.execute();
    }
    
    const char* getDescription() const override {
        return "Change Policy/Tax";
    }
};
#endif // POLICYCOMMAND_H
