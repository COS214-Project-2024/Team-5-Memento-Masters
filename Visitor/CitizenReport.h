#ifndef CITIZENREPORT_H
#define CITIZENREPORT_H
#include "Visitor.h"
#pragma once

class CitizenReport : public Visitor
{
public:
    CitizenReport();
    std::string generateReport() override;
      void visit(Citizen* citizen);
    ~CitizenReport();

private:
int moodSum;
int healthSum;
int total;
};

#endif