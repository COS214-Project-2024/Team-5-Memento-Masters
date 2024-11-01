#ifndef TRANSPORTDEPARTMENT_H
#define TRANSPORTDEPARTMENT_H

#include "ComplaintHandler.h"
#include <iostream>

class TransportDepartment : public ComplaintHandler {
public:
    void handleComplaint(const std::string& complaint) override;
};

#endif 
