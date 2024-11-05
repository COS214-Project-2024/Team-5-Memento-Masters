#ifndef BUILDINGREPORT_H
#define BUILDINGREPORT_H
#include "Visitor.h"
#include "FactoryMethod/Factory.h"
#include "FactoryMethod/PowerPlant.h"
#include "FactoryMethod/Shop.h"
#include "FactoryMethod/Mall.h"
#include "FactoryMethod/Office.h"
#include "FactoryMethod/House.h"
#include "FactoryMethod/Apartment.h"
#include "FactoryMethod/Park.h"
#include "FactoryMethod/Monument.h"
#include "FactoryMethod/Road.h"
#include "FactoryMethod/Airport.h"
#include "FactoryMethod/TrainStation.h"
class Factory;
class Office;
class House;
class Apartment;
class Park;
class Monument;
class Road;
class Airport;
class TrainStation;
class PowerPlant;
class Shop;
class Mall;

/**
 * @class BuildingReport
 * @brief Visitor class that generates a report of the buildings in the city
 * 
 * This class is a concrete visitor class that generates a report of the buildings in the city.
 */
class BuildingReport : public Visitor
{
public:
    /**
     * @brief Construct a new Building Report object
     */
    BuildingReport();

    /**
     * @brief Generate the report
     * 
     * @return std::string The report
     */
    std::string generateReport() override;

    /**
     * @brief Visit the object
     * 
     * @param building Pointer to the building object
     */
     void visit(Building* building);

    /**
     * @brief Destroy the Building Report object
     */
    ~BuildingReport();

private:
int *types= new int[12]; ///< Array to store the number of each type of building
};

#endif