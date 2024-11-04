#ifndef UTILITIESDEPARTMENT_H
#define UTILITIESDEPARTMENT_H

#include "ComplaintHandler.h"
#include <iostream>

/**
 * @class UtilitiesDepartment
 * @brief Class for handling utilities-related complaints.
 */
class UtilitiesDepartment : public ComplaintHandler {
public:
    /**
     * @brief Handles the complaint. If the complaint is utilities-related, it is handled here.
     * @param complaint The complaint to handle.
     */
    void handleComplaint(const std::string& complaint) override;
};

#endif // UTILITIESDEPARTMENT_H