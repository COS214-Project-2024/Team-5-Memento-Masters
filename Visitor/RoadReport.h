#ifndef ROADREPORT_H
#define ROADREPORT_H
#include "Visitor.h"
#include "FactoryMethod/Road.h"
#include <string>
class Road;
class RoadReport : public Visitor
{
public:
    RoadReport();
    /// @brief Generates a report of the City's Roads overall efficiency
    /// @return A string output of average efficiency
    std::string generateReport() override;
    /// @brief Uses the passed in parameter to calculate the total sum of Efficiency
    /// @param road Used to sum total efficiency within the City
    void visit(Road *road);
    ~RoadReport();

private:
int efficiencySum;
};

#endif
