#ifndef COMPLAINTHANDLER_H
#define COMPLAINTHANDLER_H

#include <string>

/**
 * @class ComplaintHandler
 * @brief Abstract base class for handling complaints in a chain of responsibility pattern.
 */
class ComplaintHandler {
protected:
    ComplaintHandler* nextHandler; ///< Pointer to the next handler in the chain.

public:
    /**
     * @brief Sets the next handler in the chain.
     * @param handler Pointer to the next ComplaintHandler.
     */
    void setNextHandler(ComplaintHandler* handler);

    /**
     * @brief Handles the complaint. Should be overridden by derived classes.
     * @param complaint The complaint to handle.
     */
    virtual void handleComplaint(const std::string& complaint);

    /**
     * @brief Virtual destructor for the ComplaintHandler class.
     */
    virtual ~ComplaintHandler() = default; 
};

#endif // COMPLAINTHANDLER_H