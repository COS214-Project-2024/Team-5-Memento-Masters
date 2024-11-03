#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H
#include "Menu.h"
#include "ResidentialCommand.h"
#include "CommercialCommand.h"
#include "IndustrialCommand.h"
#include "TransportCommand.h"
#include "RemoveCommand.h"

class BuildCommand : public MenuCommand {
public:
    BuildCommand(City* cityRef) : MenuCommand(cityRef){} 

    ~BuildCommand() override {}

    void execute(Menu* currentMenu) override {
        Menu buildMenu("Building Menu", currentMenu, 1);
        
        buildMenu.addCommand(std::make_shared<ResidentialCommand>(city));
        buildMenu.addCommand(std::make_shared<CommercialCommand>(city));
        buildMenu.addCommand(std::make_shared<IndustrialCommand>(city));
        buildMenu.addCommand(std::make_shared<TransportCommand>(city));
        buildMenu.addCommand(std::make_shared<RemoveCommand>(city));

        buildMenu.execute();
    }
    
    const char* getDescription() const override {
        return "Build";
    }
};

#endif // BUILDCOMMAND_H
