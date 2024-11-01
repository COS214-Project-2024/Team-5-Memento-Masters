#ifndef BUILDINGREPORT_H
#define BUILDINGREPORT_H
#include "Visitor.h"
#pragma once

class BuildingReport : public Visitor
{
public:
    BuildingReport();
    std::string generateReport() override;
     void visit(Building* building);
    ~BuildingReport();

private:
int *types= new int[12];
};

#endif