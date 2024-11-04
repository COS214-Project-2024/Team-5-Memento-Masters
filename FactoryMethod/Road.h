
#ifndef ROAD_H
#define ROAD_H
#include "../Visitor/RoadReport.h";
#include "TransportBuilding.h"

class Road: public TransportBuilding
{
public:
 Road(int cost = 10000) : TransportBuilding(cost, 100) {}
  void accept(RoadReport* v);
  int getEfficiencyValue();
    ~Road();
~Road() = default;
private:
int efficiencyValue;
};

#endif
