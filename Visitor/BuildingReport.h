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
    std::string generateReport() override;
     void visit(Building* building);
    ~BuildingReport();

private:
int *types= new int[12];
};

#endif