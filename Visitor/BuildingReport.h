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

class BuildingReport : public Visitor
{
public:
    
    BuildingReport();
    /// @brief Generates a report on the number of each type of building there is within the City
    
    /// @return A string output of the number of buildings currently in the City of each type
    std::string generateReport() override;
     /// @brief This takes in a building and calls the required functions to generate the Report
     /// @param building The passed in building pointer from the city map
     void visit(Building* building);
    ~BuildingReport();

private:
/// @brief Used to store each buildings information for the count of each type
int *types= new int[12];
};

#endif
