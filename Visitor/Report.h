#ifndef REPORT_H
#define REPORT_H
#include <string>

class Report
{
public:
    Report();
    virtual std::string generalReport()=0;
    
    ~Report();

private:

};

#endif