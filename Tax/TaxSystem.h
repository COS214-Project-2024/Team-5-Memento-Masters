#ifndef TAXSYSTEM_H
#define TAXSYSTEM_H

#include <stdexcept>

/**
 * @class TaxSystem
 * @brief Singleton class for managing the tax system.
 */
class TaxSystem {
private:
    static TaxSystem* instance; ///< Singleton instance of the TaxSystem.
    float incomeTaxRate; ///< The current income tax rate.
    float salesTaxRate; ///< The current sales tax rate.
    float propertyTaxRate; ///< The current property tax rate.

    /**
     * @brief Private constructor to prevent instantiation.
     */
    TaxSystem();

public:
    /**
     * @brief Gets the singleton instance of the TaxSystem.
     * @return Pointer to the singleton instance of the TaxSystem.
     */
    static TaxSystem* getInstance();

    /**
     * @brief Gets the current income tax rate.
     * @return The current income tax rate.
     */
    float getIncomeTaxRate() const;

    /**
     * @brief Sets a new income tax rate.
     * @param newRate The new income tax rate to set.
     */
    void setIncomeTaxRate(float newRate);

    /**
     * @brief Gets the current sales tax rate.
     * @return The current sales tax rate.
     */
    float getSalesTaxRate() const;

    /**
     * @brief Sets a new sales tax rate.
     * @param newRate The new sales tax rate to set.
     */
    void setSalesTaxRate(float newRate);

    /**
     * @brief Gets the current property tax rate.
     * @return The current property tax rate.
     */
    float getPropertyTaxRate() const;

    /**
     * @brief Sets a new property tax rate.
     * @param newRate The new property tax rate to set.
     */
    void setPropertyTaxRate(float newRate);

    /**
     * @brief Displays the current tax rates.
     */
    void displayTaxRates() const;
};

#endif // TAXSYSTEM_H