// COMMAND DESIGN PATTERN (ConcreteCoomand)
// BuildCommand.h

#ifndef BUILDCOMMAND_H
#define BUILDCOMMAND_H

#include <iostream>
#include "Command.h"
#include "BuildingFactory.h"

class BuildCommand : public Command
{

public:
    BuildCommand(BuildingFactory* factory, const std::string& type);
    ~BuildCommand();
    void execute();
    void undo();

    private:
    BuildingFactory *factory; //receiver
    std::string type; //  "House"
    Building* building;     // keep track of created building for undo
};

#endif // BUILDCOMMAND_H
