// COMMAND DESIGN PATTERN (ConcreteCoomand)
// BuildCommand.h

#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H

#include "Command.h"
#include "City.h"

class BuildCommand : public Command
{
private:
    City *city;
    std::string buildingType; //  "Hospital"

public:
    BuildCommand(City *city, const std::string &buildingType);
    void execute();
    void undo();
};

#endif // BUILDCOMMAND_H
