#ifndef COMPLAINT_ROUTER_H
#define COMPLAINT_ROUTER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include "ComplaintHandler.h"

/**
 * @class ComplaintRouter
 * @brief Class for routing complaints to the appropriate handlers.
 */
class ComplaintRouter {
private:
    std::unordered_map<std::string, ComplaintHandler*> handlerMap; ///< Map of complaint types to their handlers.

public:
    /**
     * @brief Registers a handler for a specific type of complaint.
     * @param complaintType The type of complaint the handler will handle.
     * @param handler Pointer to the ComplaintHandler.
     */
    void registerHandler(const std::string& complaintType, ComplaintHandler* handler);

    /**
     * @brief Routes the complaint to the appropriate handler.
     * @param complaint The complaint to handle.
     */
    void handleComplaint(const std::string& complaint);
};

#endif // COMPLAINT_ROUTER_H