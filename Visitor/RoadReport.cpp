#include "RoadReport.h"

RoadReport::RoadReport()
{

}

std::string RoadReport::generateReport(){
   return "Road Efficiency: "+efficiencySum;
}

void RoadReport::visit(Road *road){
     efficiencySum += road->getEfficiencyValue();
}
RoadReport::~RoadReport()
{

}