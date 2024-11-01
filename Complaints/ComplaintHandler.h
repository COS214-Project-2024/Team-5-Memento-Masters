#ifndef COMPLAINTHANDLER_H
#define COMPLAINTHANDLER_H

#include <string>

class ComplaintHandler {
protected:
    ComplaintHandler* nextHandler;
    
public:
    void setNextHandler(ComplaintHandler* handler);
    virtual void handleComplaint(const std::string& complaint);
    virtual ~ComplaintHandler() = default; 
};

#endif
