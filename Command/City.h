#ifndef CITY_H
#define CITY_H

#include <string>
#include <iostream>

class City
{
private:
    float taxRate;
    int buildings;

public:
    City();

    void adjustTax(float);

    void build(const std::string &);

    float getTaxRate() const;

    int getBuildings() const;

    void removeBuilding();
};

#endif // CITY_H
