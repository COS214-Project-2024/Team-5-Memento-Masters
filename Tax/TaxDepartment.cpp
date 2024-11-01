#include "TaxDepartment.h"

void TaxDepartment::handleComplaint(const std::string& complaint) {
    if (complaint == "taxes") {
        std::cout << "Tax Department: Handling tax complaint.\n";
        TaxSystem* taxSystem = TaxSystem::getInstance();
        std::cout << "Current tax rate: " << taxSystem->getTaxRate() * 100 << "%\n";
        // Possibly adjust tax rate here based on the complaint
    } else {
        ComplaintHandler::handleComplaint(complaint);
    }
}
