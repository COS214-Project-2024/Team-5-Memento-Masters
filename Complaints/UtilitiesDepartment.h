#ifndef UTILITIESDEPARTMENT_H
#define UTILITIESDEPARTMENT_H

#include "ComplaintHandler.h"
#include <iostream>

class UtilitiesDepartment : public ComplaintHandler {
public:
    void handleComplaint(const std::string& complaint) override;
};

#endif 