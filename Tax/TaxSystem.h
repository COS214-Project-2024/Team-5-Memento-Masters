#ifndef TAXSYSTEM_H
#define TAXSYSTEM_H

/**
 * @class TaxSystem
 * @brief Singleton class for managing the tax system.
 */
class TaxSystem {
private:
    static TaxSystem* instance; ///< Singleton instance of the TaxSystem.
    float taxRate; ///< The current tax rate.
    
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
     * @brief Gets the current tax rate.
     * @return The current tax rate.
     */
    float getTaxRate() const;

    /**
     * @brief Sets a new tax rate.
     * @param newRate The new tax rate to set.
     */
    void setTaxRate(float newRate);

    /**
     * @brief Displays the current tax rate.
     */
    void displayTaxRate() const;
};

#endif // TAXSYSTEM_H