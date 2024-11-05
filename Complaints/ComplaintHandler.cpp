#include "ComplaintHandler.h"

void ComplaintHandler::setNextHandler(ComplaintHandler* handler) {
    nextHandler = handler;
}

void ComplaintHandler::handleComplaint(const std::string& complaint) {
    if (nextHandler) {
        nextHandler->handleComplaint(complaint);
    }
}