#ifndef CITY_H
#define CITY_H
#include "MapNode.h"
#include "Citizen.h"
#include <vector>
using namespace std;

class City {
    private:
        vector<vector<MapNode>> map;
        vector<Citizen*> citizens;
        double incomeTaxRate;
        double salesTaxRate;
        double propertyTaxRate;
        int population;
        string name;
        double crimeRate;
        int housingCapacity;
        int housingDemand;
        int powerCapacity;
        int powerDemand;
        double trafficIndex;
        double entertainmentIndex;
        double healthcareIndex;
        double educationIndex;


    public:
        City(int width, int height, string name);
        void constructBuilding(string buildingType, string coord);
        void printMap();

};
#endif //CITY_H