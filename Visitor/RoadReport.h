#ifndef ROADREPORT_H
#define ROADREPORT_H
#include "Visitor.h"
#include "FactoryMethod/Road.h"
#include <string>
#include "../FactoryMethod/Road.h"

/**
 * @class RoadReport
 * @brief Visitor class that generates a report of the roads in the city
 * 
 * This class is a concrete visitor class that generates a report of the roads in the city.
 */
class RoadReport : public Visitor
{
public:
    /**
     * @brief Construct a new Road Report object
     */
    RoadReport();

    /**
     * @brief Generate the report
     * 
     * @return std::string The report
     */
    std::string generateReport() override;

    /**
     * @brief Visit the object
     * 
     * @param road Pointer to the road object
     */
    void visit(Road *road);

    /**
     * @brief Destroy the Road Report object
     */
    ~RoadReport();

private:
int efficiencySum; ///< Sum of the efficiency of the roads
};

#endif