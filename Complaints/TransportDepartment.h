#ifndef TRANSPORTDEPARTMENT_H
#define TRANSPORTDEPARTMENT_H

#include "ComplaintHandler.h"
#include <iostream>

/**
 * @class TransportDepartment
 * @brief Class for handling transport-related complaints.
 */
class TransportDepartment : public ComplaintHandler {
public:
    /**
     * @brief Handles the complaint. If the complaint is transport-related, it is handled here.
     * @param complaint The complaint to handle.
     */
    void handleComplaint(const std::string& complaint) override;
};

#endif // TRANSPORTDEPARTMENT_H