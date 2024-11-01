#include "TransportDepartment.h"

void TransportDepartment::handleComplaint(const std::string& complaint) {
    if (complaint == "transport") {
        std::cout << "Transport Department -> Handling transport complaint - This bus sucks ass\n";
    } else {
        ComplaintHandler::handleComplaint(complaint);
    }
}
