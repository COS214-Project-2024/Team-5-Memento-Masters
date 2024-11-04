#ifndef MAYOR_H
#define MAYOR_H

#include "ComplaintHandler.h"
#include <iostream>

/**
 * @class Mayor
 * @brief Class for handling complaints that reach the mayor.
 */
class Mayor : public ComplaintHandler {
public:
    /**
     * @brief Handles the complaint. If the complaint reaches the mayor, it is handled here.
     * @param complaint The complaint to handle.
     */
    void handleComplaint(const std::string& complaint) override;
};

#endif // MAYOR_H