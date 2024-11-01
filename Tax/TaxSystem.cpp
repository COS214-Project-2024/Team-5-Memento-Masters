#include "TaxSystem.h"
#include <iostream>

TaxSystem* TaxSystem::instance = nullptr;

TaxSystem::TaxSystem() : taxRate(0.05f) {}

TaxSystem* TaxSystem::getInstance() {
    if (!instance) {
        instance = new TaxSystem();
    }
    return instance;
}

float TaxSystem::getTaxRate() const {
    return taxRate;
}

void TaxSystem::setTaxRate(float newRate) {
    taxRate = newRate;
}

void TaxSystem::displayTaxRate() const {
    std::cout << "Current tax rate: " << taxRate * 100 << "%\n";
}
