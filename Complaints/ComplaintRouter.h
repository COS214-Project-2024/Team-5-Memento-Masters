#ifndef COMPLAINT_ROUTER_H
#define COMPLAINT_ROUTER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include "ComplaintHandler.h"

class ComplaintRouter {
private:
    std::unordered_map<std::string, ComplaintHandler*> handlerMap;

public:
    void registerHandler(const std::string& complaintType, ComplaintHandler* handler);
    void handleComplaint(const std::string& complaint);
};

#endif // COMPLAINT_ROUTER_H