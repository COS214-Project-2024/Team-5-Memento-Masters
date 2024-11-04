#include "ComplaintRouter.h"

void ComplaintRouter::registerHandler(const std::string& complaintType, ComplaintHandler* handler) {
    handlerMap[complaintType] = handler;
}

void ComplaintRouter::handleComplaint(const std::string& complaint) {
    std::string complaintType = complaint; 

    if (handlerMap.find(complaintType) != handlerMap.end()) {
        handlerMap[complaintType]->handleComplaint(complaint);
    } else {
        std::cout << "No handler found for complaint type: " << complaintType << std::endl;
    }
}