#include <gtest/gtest.h>
#include "../FactoryMethod/IndustrialBuildingFactory.h"
#include "../FactoryMethod/CommercialBuildingFactory.h"
#include "../FactoryMethod/ResidentialBuildingFactory.h"
#include "../FactoryMethod/LandmarkBuildingFactory.h"
#include "../FactoryMethod/TransportBuildingFactory.h"
#include "../FactoryMethod/PowerPlant.h"
#include "../FactoryMethod/Factory.h"
#include "../FactoryMethod/Shop.h"
#include "../FactoryMethod/Mall.h"
#include "../FactoryMethod/Office.h"
#include "../FactoryMethod/House.h"
#include "../FactoryMethod/Apartment.h"
#include "../FactoryMethod/Park.h"
#include "../FactoryMethod/Monument.h"
#include "../FactoryMethod/Road.h"
#include "../FactoryMethod/Airport.h"
#include "../FactoryMethod/TrainStation.h"

// IndustrialBuildingFactory Tests
TEST(BuildingFactoryTests, IndustrialBuildingFactoryCreatesFactory) {
    IndustrialBuildingFactory factory;
    Building* building = factory.createBuilding("Factory");
    EXPECT_NE(dynamic_cast<Factory*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, IndustrialBuildingFactoryCreatesPowerPlant) {
    IndustrialBuildingFactory factory;
    Building* building = factory.createBuilding("PowerPlant");
    EXPECT_NE(dynamic_cast<PowerPlant*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, IndustrialBuildingFactoryReturnsNullForInvalidType) {
    IndustrialBuildingFactory factory;
    Building* building = factory.createBuilding("InvalidType");
    EXPECT_EQ(building, nullptr);
}

// CommercialBuildingFactory Tests
TEST(BuildingFactoryTests, CommercialBuildingFactoryCreatesShop) {
    CommercialBuildingFactory factory;
    Building* building = factory.createBuilding("Shop");
    EXPECT_NE(dynamic_cast<Shop*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, CommercialBuildingFactoryCreatesMall) {
    CommercialBuildingFactory factory;
    Building* building = factory.createBuilding("Mall");
    EXPECT_NE(dynamic_cast<Mall*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, CommercialBuildingFactoryCreatesOffice) {
    CommercialBuildingFactory factory;
    Building* building = factory.createBuilding("Office");
    EXPECT_NE(dynamic_cast<Office*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, CommercialBuildingFactoryReturnsNullForInvalidType) {
    CommercialBuildingFactory factory;
    Building* building = factory.createBuilding("InvalidType");
    EXPECT_EQ(building, nullptr);
}

// ResidentialBuildingFactory Tests
TEST(BuildingFactoryTests, ResidentialBuildingFactoryCreatesHouse) {
    ResidentialBuildingFactory factory;
    Building* building = factory.createBuilding("House");
    EXPECT_NE(dynamic_cast<House*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, ResidentialBuildingFactoryCreatesApartment) {
    ResidentialBuildingFactory factory;
    Building* building = factory.createBuilding("Apartment");
    EXPECT_NE(dynamic_cast<Apartment*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, ResidentialBuildingFactoryReturnsNullForInvalidType) {
    ResidentialBuildingFactory factory;
    Building* building = factory.createBuilding("InvalidType");
    EXPECT_EQ(building, nullptr);
}

// LandmarkBuildingFactory Tests
TEST(BuildingFactoryTests, LandmarkBuildingFactoryCreatesPark) {
    LandmarkBuildingFactory factory;
    Building* building = factory.createBuilding("Park");
    EXPECT_NE(dynamic_cast<Park*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, LandmarkBuildingFactoryCreatesMonument) {
    LandmarkBuildingFactory factory;
    Building* building = factory.createBuilding("Monument");
    EXPECT_NE(dynamic_cast<Monument*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, LandmarkBuildingFactoryReturnsNullForInvalidType) {
    LandmarkBuildingFactory factory;
    Building* building = factory.createBuilding("InvalidType");
    EXPECT_EQ(building, nullptr);
}

// TransportBuildingFactory Tests
TEST(BuildingFactoryTests, TransportBuildingFactoryCreatesRoad) {
    TransportBuildingFactory factory;
    Building* building = factory.createBuilding("Road");
    EXPECT_NE(dynamic_cast<Road*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, TransportBuildingFactoryCreatesAirport) {
    TransportBuildingFactory factory;
    Building* building = factory.createBuilding("Airport");
    EXPECT_NE(dynamic_cast<Airport*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, TransportBuildingFactoryCreatesTrainStation) {
    TransportBuildingFactory factory;
    Building* building = factory.createBuilding("TrainStation");
    EXPECT_NE(dynamic_cast<TrainStation*>(building), nullptr);
    delete building;
}

TEST(BuildingFactoryTests, TransportBuildingFactoryReturnsNullForInvalidType) {
    TransportBuildingFactory factory;
    Building* building = factory.createBuilding("InvalidType");
    EXPECT_EQ(building, nullptr);
}
