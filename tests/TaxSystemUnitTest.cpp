#include <gtest/gtest.h>
#include "../Tax/TaxSystem.h"

class TaxSystemUnitTest : public ::testing::Test {
protected:
    virtual void TearDown() {
        taxSystem = nullptr;
    }
    
    virtual void SetUp() {
        taxSystem = TaxSystem::getInstance();
        ASSERT_NE(taxSystem, nullptr) << "TaxSystem instance is null";
        taxSystem->setIncomeTaxRate(0.0f);
        taxSystem->setSalesTaxRate(0.0f);
        taxSystem->setPropertyTaxRate(0.0f);
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

TEST_F(TaxSystemUnitTest, InitialTaxRatesAreZero) {
    EXPECT_FLOAT_EQ(0.0f, taxSystem->getIncomeTaxRate());
    EXPECT_FLOAT_EQ(0.0f, taxSystem->getSalesTaxRate());
    EXPECT_FLOAT_EQ(0.0f, taxSystem->getPropertyTaxRate());
}

TEST_F(TaxSystemUnitTest, SetAndGetIncomeTaxRate) {
    taxSystem->setIncomeTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getIncomeTaxRate());
}

TEST_F(TaxSystemUnitTest, SetAndGetSalesTaxRate) {
    taxSystem->setSalesTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getSalesTaxRate());
}

TEST_F(TaxSystemUnitTest, SetAndGetPropertyTaxRate) {
    taxSystem->setPropertyTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getPropertyTaxRate());
}

TEST_F(TaxSystemUnitTest, UpdateIncomeTaxRate) {
    taxSystem->setIncomeTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getIncomeTaxRate());
    
    taxSystem->setIncomeTaxRate(0.35f);
    EXPECT_FLOAT_EQ(0.35f, taxSystem->getIncomeTaxRate());
}

TEST_F(TaxSystemUnitTest, UpdateSalesTaxRate) {
    taxSystem->setSalesTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getSalesTaxRate());
    
    taxSystem->setSalesTaxRate(0.35f);
    EXPECT_FLOAT_EQ(0.35f, taxSystem->getSalesTaxRate());
}

TEST_F(TaxSystemUnitTest, UpdatePropertyTaxRate) {
    taxSystem->setPropertyTaxRate(0.2f);
    EXPECT_FLOAT_EQ(0.2f, taxSystem->getPropertyTaxRate());
    
    taxSystem->setPropertyTaxRate(0.35f);
    EXPECT_FLOAT_EQ(0.35f, taxSystem->getPropertyTaxRate());
}

TEST_F(TaxSystemUnitTest, MaximumTaxRates) {
    taxSystem->setIncomeTaxRate(1.0f);
    EXPECT_FLOAT_EQ(1.0f, taxSystem->getIncomeTaxRate());
    
    taxSystem->setSalesTaxRate(1.0f);
    EXPECT_FLOAT_EQ(1.0f, taxSystem->getSalesTaxRate());
    
    taxSystem->setPropertyTaxRate(1.0f);
    EXPECT_FLOAT_EQ(1.0f, taxSystem->getPropertyTaxRate());
}

TEST_F(TaxSystemUnitTest, NegativeTaxRateHandling) {
    float originalIncomeTaxRate = taxSystem->getIncomeTaxRate();
    float originalSalesTaxRate = taxSystem->getSalesTaxRate();
    float originalPropertyTaxRate = taxSystem->getPropertyTaxRate();
    
    EXPECT_THROW({
        taxSystem->setIncomeTaxRate(-0.1f);
    }, std::invalid_argument);
    EXPECT_FLOAT_EQ(originalIncomeTaxRate, taxSystem->getIncomeTaxRate());
    
    EXPECT_THROW({
        taxSystem->setSalesTaxRate(-0.1f);
    }, std::invalid_argument);
    EXPECT_FLOAT_EQ(originalSalesTaxRate, taxSystem->getSalesTaxRate());
    
    EXPECT_THROW({
        taxSystem->setPropertyTaxRate(-0.1f);
    }, std::invalid_argument);
    EXPECT_FLOAT_EQ(originalPropertyTaxRate, taxSystem->getPropertyTaxRate());
}

TEST_F(TaxSystemUnitTest, DisplayTaxRates) {
    taxSystem->setIncomeTaxRate(0.25f);
    taxSystem->setSalesTaxRate(0.15f);
    taxSystem->setPropertyTaxRate(0.10f);
    
    testing::internal::CaptureStdout();
    taxSystem->displayTaxRates();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_FALSE(output.empty());
    EXPECT_NE(output.find("Income Tax: 25%"), std::string::npos);
    EXPECT_NE(output.find("Sales Tax: 15%"), std::string::npos);
    EXPECT_NE(output.find("Property Tax: 10%"), std::string::npos);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}