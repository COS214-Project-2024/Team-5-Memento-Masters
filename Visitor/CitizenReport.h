#ifndef CITIZENREPORT_H
#define CITIZENREPORT_H
#include "Visitor.h"
#include "Citizen.h"
#include "CitizenMood/ExcellentMood.h"
#include "CitizenMood/AverageMood.h"
class Citizen;

/**
 * @class CitizenReport
 * @brief Visitor class that generates a report of the citizens in the city
 * 
 * This class is a concrete visitor class that generates a report of the citizens in the city.
 */
class CitizenReport : public Visitor
{
public:
    /**
     * @brief Construct a new Citizen Report object
     */
    CitizenReport();

    /**
     * @brief Generate the report
     * 
     * @return std::string The report
     */
    std::string generateReport() override;

    /**
     * @brief Visit the object
     * 
     * @param citizen 
     */
      void visit(Citizen* citizen);

    /**
     * @brief Destroy the Citizen Report object
     */
    ~CitizenReport();

private:
int moodSum; ///< Sum of the moods of the citizens
int healthSum; ///< Sum of the health of the citizens
int total; ///< Total number of citizens
};

#endif