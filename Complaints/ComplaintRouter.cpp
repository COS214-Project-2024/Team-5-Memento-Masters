#include "ComplaintRouter.h"

ComplaintRouter* ComplaintRouter::instance = nullptr;

ComplaintRouter* ComplaintRouter::getInstance() {
    if (!instance) {
        instance = new ComplaintRouter();
    }
    return instance;
}

void ComplaintRouter::registerHandler(const std::string& complaintType, ComplaintHandler* handler) {
    handlerMap[complaintType] = handler;
}

void ComplaintRouter::handleComplaint(const std::string& complaint) {
    if (handlerMap.find(complaint) != handlerMap.end()) {
        handlerMap[complaint]->handleComplaint(complaint);
    } else {
        std::cout << "No handler found for complaint type: " << complaint << std::endl;
    }
}