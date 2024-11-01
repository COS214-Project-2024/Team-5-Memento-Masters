#ifndef ROADREPORT_H
#define ROADREPORT_H
#include "Visitor.h"
#include <string>
#pragma once

class RoadReport : public Visitor
{
public:
    RoadReport();
    std::string generateReport() override;
    void visit(Road *road);
    ~RoadReport();

private:
int efficiencySum=50;
};

#endif