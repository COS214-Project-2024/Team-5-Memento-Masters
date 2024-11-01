#ifndef ROAD_H
#define ROAD_H
#include "RoadReport.h";
#pragma once

class Road
{
public:
    Road();
  void accept(RoadReport* v);
  int getEfficiencyValue();
    ~Road();

private:
int efficiencyValue=23;
};

#endif