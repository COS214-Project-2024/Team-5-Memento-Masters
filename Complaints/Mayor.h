#ifndef MAYOR_H
#define MAYOR_H

#include "ComplaintHandler.h"
#include <iostream>

class Mayor : public ComplaintHandler {
public:
    void handleComplaint(const std::string& complaint) override;
};

#endif // MAYOR_H
