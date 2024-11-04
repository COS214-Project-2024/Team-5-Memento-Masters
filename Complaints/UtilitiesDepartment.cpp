#include "UtilitiesDepartment.h"

void UtilitiesDepartment::handleComplaint(const std::string& complaint) {
    if (complaint == "utilities") {
        std::cout << "Utilities Department: Handling utilities complaint.\n";
    } else {
        ComplaintHandler::handleComplaint(complaint);
    }
}
