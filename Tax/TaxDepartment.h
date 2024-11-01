#ifndef TAXDEPARTMENT_H
#define TAXDEPARTMENT_H

#include "../Complaints/ComplaintHandler.h"
#include "TaxSystem.h"
#include <iostream>

class TaxDepartment : public ComplaintHandler {
public:
    void handleComplaint(const std::string& complaint) override;
};

#endif 
