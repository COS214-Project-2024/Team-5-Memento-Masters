#include "City.h"

City::City()
{

}
std::string City::generateReport(){
    RoadReport *roadReport = new RoadReport();
    BuildingReport *buildingReport = new BuildingReport();
    CitizenReport *citizenReport = new CitizenReport();
    for (auto* building : buildings) {
        if (Road* road = dynamic_cast<Road*>(building)) {
            road->accept(roadReport);  
        }
    }
    for (auto &building : buildings) {
        building.accept(buildingReport);
    }
    for (auto &citizen : citizens) {
        citizen.accept(citizenReport);
    }
    String str="";
    str+=roadReport->generateReport()+"\n";
    str+=buildingReport->generateReport()+"\n";
    str+=citizenReport->generateReport()+"\n";
    return str;
}
City::~City()
{

}