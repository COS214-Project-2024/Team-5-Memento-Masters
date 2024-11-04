// COMMAND DESIGN PATTERN (ConcreteCommand)
// BuildCommand.cpp

#include "BuildCommand.h"
#include "Building.h"
#include <iostream>

BuildCommand::BuildCommand(BuildingFactory* factory, const std::string& type)
    : factory(factory), type(type), building(NULL) {}

void BuildCommand::execute() {
    building = factory->createBuilding(type);
    if (building) {
        std::cout << "Building of type '" << type << "' created.\n";
        building->construct(); 
    } else {
        std::cout << "Failed to create building of type '" << type << "'.\n";
    }
}

void BuildCommand::undo() {
    if (building) {
        std::cout << "Undoing the construction of the building of type '" << type << "'.\n";
        delete building; 
        building = NULL; 
    }
}

BuildCommand::~BuildCommand() {
}
