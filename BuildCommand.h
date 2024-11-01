#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H
#include "Menu.h"
#include "ResidentialCommand.h"
#include "CommercialCommand.h"
#include "IndustrialCommand.h"
#include "TransportCommand.h"

class BuildCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        Menu buildMenu("Building Menu", currentMenu, 1);
        
        buildMenu.addCommand(std::make_shared<ResidentialCommand>());
        buildMenu.addCommand(std::make_shared<CommercialCommand>());
        buildMenu.addCommand(std::make_shared<IndustrialCommand>());
        buildMenu.addCommand(std::make_shared<TransportCommand>());
        
        buildMenu.execute();
    }
    
    const char* getDescription() const override {
        return "Build";
    }
};

#endif // BUILDCOMMAND_H
