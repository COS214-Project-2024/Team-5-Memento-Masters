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

    public:
        City(int width, int height, string name);
        void printMap();

};
#endif //CITY_H