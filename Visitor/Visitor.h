#ifndef VISITOR_H
#define VISITOR_H
#include <string>




class Visitor
{
public:
    Visitor();
    ///@brief Pure virtual function for subsequent Visitor Sub-classes
     virtual std::string generateReport()=0;
    ~Visitor();

private:

};


#endif

