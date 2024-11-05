#include <gtest/gtest.h>
#include "City.h"
#include "Memento/CityCaretaker.h"

class MementoUnitTest : public ::testing::Test {
protected:
    virtual void TearDown() {
        delete initialState;
        delete modifiedState;
    }
    
    virtual void SetUp() {
        city = new City();
        caretaker = new CityCaretaker();

        city->setIncomeTaxRate(0.10);
        city->setSalesTaxRate(0.05);
        city->setPropertyTaxRate(0.02);
        city->addCitizen(new Citizen("John Doe", 30, "Engineer"));
        city->addCitizen(new Citizen("Jane Smith", 25, "Doctor"));

        initialState = city->saveToMemento();
        caretaker->addMemento(City::getCurrentYear(), initialState);

        city->setIncomeTaxRate(0.15);
        city->setSalesTaxRate(0.07);
        city->setPropertyTaxRate(0.03);
        city->addCitizen(new Citizen("Alice Johnson", 40, "Teacher"));

        modifiedState = city->saveToMemento();
        caretaker->addMemento(City::getCurrentYear() + 1, modifiedState);

        // Print initial and modified states
        std::cout << "Initial State:\n" << initialState->toString() << "\n";
        std::cout << "Modified State:\n" << modifiedState->toString() << "\n";
    }
    
    City* city;
    CityCaretaker* caretaker;
    CityMemento* initialState;
    CityMemento* modifiedState;
};

TEST_F(MementoUnitTest, SaveAndRestoreInitialState) {
    city->restoreFromMemento(initialState);

    // Print restored state
    std::cout << "Restored to Initial State:\n" << initialState->toString() << "\n";

    const double tolerance = 1e-6;
    EXPECT_NEAR(city->getIncomeTaxRate(), 0.10, tolerance);
    EXPECT_NEAR(city->getSalesTaxRate(), 0.05, tolerance);
    EXPECT_NEAR(city->getPropertyTaxRate(), 0.02, tolerance);
    EXPECT_EQ(city->getCitizens().size(), 3);
    EXPECT_EQ(city->getCitizens()[0]->getName(), "John Doe");
    EXPECT_EQ(city->getCitizens()[1]->getName(), "Jane Smith");
}

TEST_F(MementoUnitTest, SaveAndRestoreModifiedState) {
    city->restoreFromMemento(modifiedState);

    // Print restored state
    std::cout << "Restored to Modified State:\n" << modifiedState->toString() << "\n";

    const double tolerance = 1e-6;
    EXPECT_NEAR(city->getIncomeTaxRate(), 0.15, tolerance);
    EXPECT_NEAR(city->getSalesTaxRate(), 0.07, tolerance);
    EXPECT_NEAR(city->getPropertyTaxRate(), 0.03, tolerance);
    EXPECT_EQ(city->getCitizens().size(), 3);
    EXPECT_EQ(city->getCitizens()[0]->getName(), "John Doe");
    EXPECT_EQ(city->getCitizens()[1]->getName(), "Jane Smith");
    EXPECT_EQ(city->getCitizens()[2]->getName(), "Alice Johnson");
}

