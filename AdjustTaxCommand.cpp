// COMMAND DESIGN PATTERN (ConcreteCommand)
// AdjustTaxCommand.cpp

#include "AdjustTaxCommand.h"
#include <iostream>

AdjustTaxCommand::AdjustTaxCommand(TaxSystem *taxSys, float taxRate)
    : taxSystem(taxSys), taxRate(taxRate), previousTaxRate(taxSystem->getTaxRate()) {}

void AdjustTaxCommand::execute()
{
    std::cout << "Tax adjusted from " << previousTaxRate << " to " << taxRate << "." << std::endl;
    taxSystem->setTaxRate(taxRate);
    taxSystem->displayTaxRate();
}

void AdjustTaxCommand::undo()
{
    std::cout << "Reverting tax from " << taxRate << " back to " << previousTaxRate << "." << std::endl;
    taxSystem->setTaxRate(previousTaxRate);
    taxSystem->displayTaxRate();
}

