#ifndef CITY_H
#define CITY_H
#include "RoadReport.h"
#include "CitizenReport.h"
#include "BuildingReport.h"
#include <string>
#include <vector>
class City
{
public:
    City();
    std::string generateReport();
    ~City();

private:
vector<Building*> buildings;
vector<Citizen*> citizens;
};

#endif