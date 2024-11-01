#include "ComplaintRouter.h"

void ComplaintRouter::registerHandler(const std::string& complaintType, ComplaintHandler* handler) {
    handlerMap[complaintType] = handler;
}

void ComplaintRouter::handleComplaint(const std::string& complaint) {
    if (handlerMap.find(complaint) != handlerMap.end()) {
        handlerMap[complaint]->handleComplaint(complaint);
    } else {
        std::cout << "ComplaintRouter: No specific handler found for " << complaint << ".\n";
        if (handlerMap.find("default") != handlerMap.end()) {
            handlerMap["default"]->handleComplaint(complaint);
        } else {
            std::cout << "ComplaintRouter: No default handler available.\n";
        }
    }
}