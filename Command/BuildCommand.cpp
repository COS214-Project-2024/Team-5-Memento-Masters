// COMMAND DESIGN PATTERN (ConcreteCoomand)
// BuildCommand.cpp

#include "BuildCommand.h"

BuildCommand::BuildCommand(City *city, const std::string &buildingType)
    : city(city), buildingType(buildingType) {}

void BuildCommand::execute()
{
    city->build(buildingType);
}

void BuildCommand::undo()
{
    std::cout << "Undo build command for: " << buildingType << std::endl;
    city->removeBuilding();
}
