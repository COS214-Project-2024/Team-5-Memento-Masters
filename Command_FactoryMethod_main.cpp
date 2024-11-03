//TESTING MAIN FOR COMMAND DESIGN PATTERN (BUILDCOMMAND) AND FACTORY METHOD DESIGN PATTERN (BUILDINGFACTORY)

#include <iostream>
#include "BuildCommand.h"
#include "CommandManager.h"
#include "CommercialBuildingFactory.h"
#include "ResidentialBuildingFactory.h"
#include "IndustrialBuildingFactory.h"
#include "LandmarkBuildingFactory.h"
#include "TransportBuildingFactory.h"

int main() {
    CommandManager commandManager;
    
    //================================================================================================================================
    std::cout << "\n================================TESTING BuildCommand FOR CommercialBuildingFactory================================\n";

    CommercialBuildingFactory comFactory;

    // Create a build command for a "Shop"
    std::cout << "\nCreating a new shop using BuildCommand. \n";
    Command* buildShop = new BuildCommand(&comFactory, "Shop");
    commandManager.addCommand(buildShop);
    
    // Create another build command for a "Mall"
    std::cout << "\nCreating a new mall using BuildCommand. \n";
    Command* buildMall = new BuildCommand(&comFactory, "Mall");  //same for Office
    commandManager.addCommand(buildMall);

    // Execute all build commands
    std::cout << "\nExecuting all commercial BuildCommands: \n";
    commandManager.executeCommands();

    // Undo the last command (the creation of the Mall)
    std::cout << "\nUndo creation of last BuildCommand (mall): \n";
    commandManager.undoLastCommand();

    // Undo the last command (the creation of the Shop)
    std::cout << "\nUndo creation of last BuildCommand (shop): \n";
    commandManager.undoLastCommand();


    //===========================================================================================================================
     std::cout << "\n================================TESTING BuildCommand FOR ResidentialBuildingFactory================================\n";

    ResidentialBuildingFactory resFactory;

    std::cout << "\nCreating a new house using BuildCommand. \n";
    Command* buildHouse = new BuildCommand(&resFactory, "House"); 
    commandManager.addCommand(buildHouse);

    std::cout << "\nCreating a new apartment using BuildCommand. \n";
    Command* buildApartment = new BuildCommand(&resFactory, "Apartment");
    commandManager.addCommand(buildApartment);

    // Execute all build commands
    std::cout << "\nExecuting all new residential BuildCommands: \n";
    commandManager.executeCommands();

    std::cout << "\nUndo creation of last BuildCommand (apartment): \n";
    commandManager.undoLastCommand();

    std::cout << "\nUndo creation of last BuildCommand (house): \n";
    commandManager.undoLastCommand();


    //===================================================================================================================
    std::cout << "================================TESTING BuildCommand FOR IndustrialBuildingFactory================================\n";

    IndustrialBuildingFactory industFactory;

    std::cout << "\nCreating a new powerplant using BuildCommand. \n";
    Command* buildPowerplant = new BuildCommand(&industFactory, "PowerPlant");
    commandManager.addCommand(buildPowerplant);

    std::cout << "\nCreating a new factory using BuildCommand. \n";
    Command* buildFactory = new BuildCommand(&industFactory, "Factory"); 
    commandManager.addCommand(buildFactory);

    std::cout << "\nExecuting all new industrial BuildCommands: \n";
    commandManager.executeCommands();

    std::cout << "\nUndo creation of last BuildCommand (factory): \n";
    commandManager.undoLastCommand();

    std::cout << "\nUndo creation of last BuildCommand (powerplant): \n";
    commandManager.undoLastCommand();


    //====================================================================================================================
    std::cout << "\n================================TESTING BuildCommand FOR LandmarkBuildingFactory================================\n";

    LandmarkBuildingFactory landFactory;

    std::cout << "\nCreating a new park using BuildCommand. \n";
    Command* buildPark = new BuildCommand(&landFactory, "Park"); 
    commandManager.addCommand(buildPark);

    std::cout << "\nCreating a new monument using BuildCommand. \n";
    Command* buildMonument = new BuildCommand(&landFactory, "Monument"); 
    commandManager.addCommand(buildMonument);

    std::cout << "\nExecuting all new landmark BuildCommands: \n";
    commandManager.executeCommands();

    std::cout << "\nUndo creation of last BuildCommand (monument): \n";
    commandManager.undoLastCommand();

    std::cout << "\nUndo creation of last BuildCommand (park): \n";
    commandManager.undoLastCommand();


    //===================================================================================================================
    std::cout << "\n================================TESTING BuildCommand FOR TransportBuildingFactory================================\n";

    TransportBuildingFactory transportFactory;

    std::cout << "\nCreating a new train station using BuildCommand. \n";
    Command* buildTrainstation = new BuildCommand(&transportFactory, "TrainStation"); 
    commandManager.addCommand(buildTrainstation);

    std::cout << "\nCreating a new airport using BuildCommand. \n";
    Command* buildAirport = new BuildCommand(&transportFactory, "Airport");  //same for Road
    commandManager.addCommand(buildAirport);

    std::cout << "\nExecuting all new transport BuildCommands: \n";
    commandManager.executeCommands();

    std::cout << "\nUndo creation of last BuildCommand (airport): \n";
    commandManager.undoLastCommand();

    std::cout << "\nUndo creation of last BuildCommand (train station): \n";
    commandManager.undoLastCommand();

    std::cout << "\n================================END OF TESTING BuildCommand FOR BuildingFactories================================\n";
    //====================================================================================================================

    return 0;
}
