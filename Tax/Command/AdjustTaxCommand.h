// // COMMAND DESIGN PATTERN (ConcreteCommand)
// // AdjustTaxCommand.h

#ifndef ADJUSTTAXCOMMAND_H
#define ADJUSTTAXCOMMAND_H

#include "Command.h"
#include "City.h"

class AdjustTaxCommand : public Command
{
private:
    City *city;
    float taxRate;
    float previousTaxRate;

public:
    AdjustTaxCommand(City *city, float taxRate);
    void execute();
    void undo();
};

#endif // ADJUSTTAXCOMMAND_H
