#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H
#include "Menu.h"
#include "ResidentialCommand.h"
#include "CommercialCommand.h"
#include "IndustrialCommand.h"
#include "TransportCommand.h"
#include "LandmarkCommand.h"
#include "RemoveCommand.h"

/**
 * @class BuildCommand 
 * @brief Command to build various types of buildings
 * 
 * This command creates a sub-menu for building different types of structures
 * such as residential, commercial, industrial, transport, and landmarks.
 */
class BuildCommand : public MenuCommand {
public:
    /**
     * @brief Consruct a new BuildCommand object
     * @param cityRef Reference to the City object
     */
    BuildCommand(City* cityRef) : MenuCommand(cityRef){} 

    /**
     * @brief Destroy the BuildCommand object
     */
    ~BuildCommand() override {}

    /**
     * @brief Execute the build command
     * @param currentMenu Pointer to the current menu
     */
    void execute(Menu* currentMenu) override {
        Menu buildMenu("Building Menu", currentMenu, 1);
        
        buildMenu.addCommand(std::make_shared<ResidentialCommand>(city));
        buildMenu.addCommand(std::make_shared<CommercialCommand>(city));
        buildMenu.addCommand(std::make_shared<IndustrialCommand>(city));
        buildMenu.addCommand(std::make_shared<TransportCommand>(city));
        buildMenu.addCommand(std::make_shared<LandmarkCommand>(city));
        buildMenu.addCommand(std::make_shared<RemoveCommand>(city));

        buildMenu.execute();
    }
    
    /**
     * @brief Get the Description of the command
     * 
     * @return const char* Description of the command
     */
    const char* getDescription() const override {
        return "Build";
    }
};

#endif // BUILDCOMMAND_H
