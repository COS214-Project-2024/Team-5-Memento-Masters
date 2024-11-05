#include "TaxSystem.h"
#include <iostream>

TaxSystem* TaxSystem::instance = nullptr;

TaxSystem::TaxSystem() : incomeTaxRate(0.05f), salesTaxRate(0.07f), propertyTaxRate(0.01f) {}

TaxSystem* TaxSystem::getInstance() {
    if (!instance) {
        instance = new TaxSystem();
    }
    return instance;
}

float TaxSystem::getIncomeTaxRate() const {
    return incomeTaxRate;
}

void TaxSystem::setIncomeTaxRate(float newRate) {
    if (newRate >= 0.0f) incomeTaxRate = newRate;
    else throw std::invalid_argument("Income tax rate cannot be negative");
}

float TaxSystem::getSalesTaxRate() const {
    return salesTaxRate;
}

void TaxSystem::setSalesTaxRate(float newRate) {
    if (newRate >= 0.0f) salesTaxRate = newRate;
    else throw std::invalid_argument("Sales tax rate cannot be negative");
}

float TaxSystem::getPropertyTaxRate() const {
    return propertyTaxRate;
}

void TaxSystem::setPropertyTaxRate(float newRate) {
    if (newRate >= 0.0f) propertyTaxRate = newRate;
    else throw std::invalid_argument("Property tax rate cannot be negative");
}

void TaxSystem::displayTaxRates() const {
    std::cout << "Current tax rates:\n";
    std::cout << "Income Tax: " << incomeTaxRate * 100 << "%\n";
    std::cout << "Sales Tax: " << salesTaxRate * 100 << "%\n";
    std::cout << "Property Tax: " << propertyTaxRate * 100 << "%\n";
}