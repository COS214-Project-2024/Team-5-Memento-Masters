#include "TaxDepartment.h"

void TaxDepartment::handleComplaint(const std::string& complaint) {
    if (complaint == "taxes") {
        std::cout << "Tax Department: Handling tax complaint.\n";
        TaxSystem* taxSystem = TaxSystem::getInstance();
        taxSystem->displayTaxRates(); 
    } else {
        ComplaintHandler::handleComplaint(complaint);
    }
}