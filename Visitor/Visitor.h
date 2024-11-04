#ifndef VISITOR_H
#define VISITOR_H
#include <string>




class Visitor
{
public:
    Visitor();
     virtual std::string generateReport()=0;
    ~Visitor();

private:

};

#endif