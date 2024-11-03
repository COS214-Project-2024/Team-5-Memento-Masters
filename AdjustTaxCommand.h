// // COMMAND DESIGN PATTERN (ConcreteCommand)
// // AdjustTaxCommand.h

#ifndef ADJUSTTAXCOMMAND_H
#define ADJUSTTAXCOMMAND_H

#include "Command.h"
#include "TaxSystem.h"

class AdjustTaxCommand : public Command
{
public:
    AdjustTaxCommand(TaxSystem *taxSys, float taxRate);
    void execute();
    void undo();

private:
    TaxSystem* taxSystem;   // receiver
    float taxRate;
    float previousTaxRate;
};

#endif // ADJUSTTAXCOMMAND_H


