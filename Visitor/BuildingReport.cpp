#include "BuildingReport.h"

BuildingReport::BuildingReport()
{
}
std::string BuildingReport::generateReport()
{
    std::string str = "---------------------\nBuilding Type Breakdown:\n---------------------\n";
    str += "Factories: " + types[0];
    str += "Power Plants: " + types[1];
    str += "Shops: " + types[2];
    str += "Malls: " + types[3];
    str += "Office: " + types[4];
    str += "House: " + types[5];
    str += "Apartments: " + types[6];
    str += "Parks: " + types[7];
    str += "Monuments: " + types[8];
    str += "Roads: " + types[9];
    str += "Airports: " + types[10];
    str += "Trainstations: " + types[11];
    return str;
}

void BuildingReport::visit(Building *building){
    if (dynamic_cast<const Factory *>(building))
    {
        types[0]++;
    }
    else if (dynamic_cast<const PowerPlant *>(building))
    {
        types[1]++;
    }
    else if (dynamic_cast<const Shop *>(building))
    {
        types[2]++;
    }
    else if (dynamic_cast<const Mall *>(building))
    {
        types[3]++;
    }
    else if (dynamic_cast<const Office *>(building))
    {
        types[4]++;
    }
    else if (dynamic_cast<const House *>(building))
    {
        types[5]++;
    }
    else if (dynamic_cast<const Apartment *>(building))
    {
        types[6]++;
    }
    else if (dynamic_cast<const Park *>(building))
    {
        types[7]++;
    }
    else if (dynamic_cast<const Monument *>(building))
    {
        types[8]++;
    }
    else if (dynamic_cast<const Road *>(building))
    {
        types[9]++;
    }
    else if (dynamic_cast<const Airport *>(building))
    {
        types[10]++;
    }
    else if (dynamic_cast<const TrainStation *>(building))
    {
        types[11]++;
    }
}
BuildingReport::~BuildingReport()
{
}