#include <gtest/gtest.h>
#include "../Tax/TaxSystem.h"

class TaxSystemUnitTest : public ::testing::Test {
protected:
    virtual void TearDown() {
        // Note: We don't delete the instance since it's a singleton
        taxSystem = nullptr;
    }
    
    virtual void SetUp() {
        taxSystem = TaxSystem::getInstance();
        taxSystem->setTaxRate(0.0f);
    }
    
    TaxSystem* taxSystem;
};

TEST_F(TaxSystemUnitTest, GetInstanceReturnsNonNull) {
    EXPECT_NE(nullptr, taxSystem);
}

TEST_F(TaxSystemUnitTest, GetInstanceReturnsSameInstance) {
    TaxSystem* anotherInstance = TaxSystem::getInstance();
    EXPECT_EQ(taxSystem, anotherInstance);
}

TEST_F(TaxSystemUnitTest, InitialTaxRateIsZero) {
    EXPECT_FLOAT_EQ(0.0f, taxSystem->getTaxRate());
}

TEST_F(TaxSystemUnitTest, SetAndGetTaxRate) {
    taxSystem->setTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getTaxRate());
}

TEST_F(TaxSystemUnitTest, UpdateTaxRate) {
    taxSystem->setTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getTaxRate());
    
    taxSystem->setTaxRate(0.35f);
    EXPECT_FLOAT_EQ(0.35f, taxSystem->getTaxRate());
}

TEST_F(TaxSystemUnitTest, MaximumTaxRate) {
    taxSystem->setTaxRate(1.0f);
    EXPECT_FLOAT_EQ(1.0f, taxSystem->getTaxRate());
}

TEST_F(TaxSystemUnitTest, NegativeTaxRateHandling) {
    float originalRate = taxSystem->getTaxRate();
    EXPECT_THROW({
        taxSystem->setTaxRate(-0.1f);
    }, std::invalid_argument);
    
    EXPECT_FLOAT_EQ(originalRate, taxSystem->getTaxRate());
}

TEST_F(TaxSystemUnitTest, DisplayTaxRate) {
    taxSystem->setTaxRate(0.25f);
    testing::internal::CaptureStdout();
    taxSystem->displayTaxRate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_FALSE(output.empty());
}