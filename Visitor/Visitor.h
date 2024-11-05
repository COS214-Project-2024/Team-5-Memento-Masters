#ifndef VISITOR_H
#define VISITOR_H
#include <string>

/**
 * @class Visitor
 * @brief Abstract visitor class
 * 
 * This class is an abstract visitor class that defines the interface for the concrete visitor classes.
 */
class Visitor
{
public:
    /**
     * @brief Construct a new Visitor object
     */
    Visitor();

    /**
     * @brief generate the report
     * 
     * @return std::string 
     */
     virtual std::string generateReport()=0;

    /**
     * @brief Destroy the Visitor object
     */
    ~Visitor();

private:

};

#endif