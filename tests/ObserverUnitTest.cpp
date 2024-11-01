#include <gtest/gtest.h>
#include "../City.h"
#include "../Citizen.h"
#include "../Observer/CitizenObserver.h"
#include "../CitizenMood/ExcellentMood.h"
#include "../CitizenMood/AverageMood.h"
#include "../CitizenMood/PoorMood.h"

class ObserverUnitTest : public ::testing::Test {
protected:
    virtual void SetUp() {
        city = new City();
        observer = new CitizenObserver();
        city->attach(observer);
    }

    virtual void TearDown() {
        city->detach(observer);
        delete observer;
        delete city;
    }

    City* city;
    CitizenObserver* observer;
};

TEST_F(ObserverUnitTest, AttachObserver) {
    EXPECT_EQ(city->getCitizens().size(), 0);
    Citizen* citizen = new Citizen("John Doe", 30, false, "Engineer");
    city->addCitizen(citizen);
    EXPECT_EQ(city->getCitizens().size(), 1);
    delete citizen;
}

TEST_F(ObserverUnitTest, NotifyObserversIncomeTax) {
    Citizen* citizen = new Citizen("John Doe", 30, false, "Engineer");
    city->addCitizen(citizen);
    city->setIncomeTaxRate(0.12);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(AverageMood));
    city->setIncomeTaxRate(0.16);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(PoorMood));
    city->setIncomeTaxRate(0.08);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(ExcellentMood));
    delete citizen;
}

TEST_F(ObserverUnitTest, NotifyObserversSalesTax) {
    Citizen* citizen = new Citizen("John Doe", 30, false, "Engineer");
    city->addCitizen(citizen);
    city->setSalesTaxRate(0.06);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(AverageMood));
    city->setSalesTaxRate(0.11);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(PoorMood));
    city->setSalesTaxRate(0.04);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(ExcellentMood));
    delete citizen;
}

TEST_F(ObserverUnitTest, NotifyObserversPropertyTax) {
    Citizen* citizen = new Citizen("John Doe", 30, false, "Engineer");
    city->addCitizen(citizen);
    city->setPropertyTaxRate(0.16);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(AverageMood));
    city->setPropertyTaxRate(0.21);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(PoorMood));
    city->setPropertyTaxRate(0.14);
    EXPECT_EQ(typeid(*citizen->getMood()), typeid(ExcellentMood));
    delete citizen;
}