// // COMMAND DESIGN PATTERN (ConcreteCommand)
// // AdjustTaxCommand.cpp

#include "AdjustTaxCommand.h"
#include <iostream>

AdjustTaxCommand::AdjustTaxCommand(City *city, float taxRate)
    : city(city), taxRate(taxRate), previousTaxRate(city->getTaxRate()) {}

void AdjustTaxCommand::execute()
{
    std::cout << "Tax adjusted from " << previousTaxRate << " to " << taxRate << "." << std::endl;
    city->adjustTax(taxRate);
}

void AdjustTaxCommand::undo()
{
    std::cout << "Reverting tax from " << taxRate << " back to " << previousTaxRate << "." << std::endl;
    city->adjustTax(previousTaxRate);
}
