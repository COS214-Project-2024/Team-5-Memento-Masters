#ifndef CITIZENREPORT_H
#define CITIZENREPORT_H
#include "Visitor.h"
#include "Citizen.h"
#include "CitizenMood/ExcellentMood.h"
#include "CitizenMood/AverageMood.h"
class Citizen;

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