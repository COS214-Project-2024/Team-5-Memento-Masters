#ifndef ROADREPORT_H
#define ROADREPORT_H
#include "Visitor.h"
#include "FactoryMethod/Road.h"
#include <string>
#include "../FactoryMethod/Road.h"
class RoadReport : public Visitor
{
public:
    RoadReport();
    std::string generateReport() override;
    void visit(Road *road);
    ~RoadReport();

private:
int efficiencySum;
};

#endif