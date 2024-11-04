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
    /// @brief Generates a report of the overall Citizens average mood and health
/// @return A string output of the average mood and health
    std::string generateReport() override;
    /// @brief Uses the provided passed in citizen to tally the Sum of mood and health values 
    /// @param citizen Used to calculate the average Mood and Health of all Citizens

      void visit(Citizen* citizen);
    ~CitizenReport();

private:
int moodSum;
int healthSum;
int total;
};

#endif

