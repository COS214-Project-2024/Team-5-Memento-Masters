//SINGLETON DESIGN PATTERN + RECEIVER IN COMMAND DESIGN PATTERN

#ifndef TAXSYSTEM_H
#define TAXSYSTEM_H

class TaxSystem {
private:
    static TaxSystem* instance;
    float taxRate;
    TaxSystem();

public:
    static TaxSystem* getInstance();
    float getTaxRate() const;
    void setTaxRate(float newRate);
    void displayTaxRate() const;
};

#endif 