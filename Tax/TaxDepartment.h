#ifndef TAXDEPARTMENT_H
#define TAXDEPARTMENT_H

#include "../Complaints/ComplaintHandler.h"
#include "TaxSystem.h"
#include <iostream>

/**
 * @class TaxDepartment
 * @brief Class for handling tax-related complaints.
 */
class TaxDepartment : public ComplaintHandler {
public:
    /**
     * @brief Handles the complaint. If the complaint is tax-related, it is handled here.
     * @param complaint The complaint to handle.
     */
    void handleComplaint(const std::string& complaint) override;
};

#endif // TAXDEPARTMENT_H