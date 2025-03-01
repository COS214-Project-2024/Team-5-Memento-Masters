#ifndef TAXCOMMAND_H
#define TAXCOMMAND_H
#include "Menu.h"

/**
 * @class TaxCommand
 * @brief Command to update tax rates.
 * 
 * This command allows the user to update the income, sales, and property tax rates.
 */
class TaxCommand : public MenuCommand {
public:
    /**
     * @brief Construct a new TaxCommand object.
     * 
     * @param cityRef Reference to the City object.
     */
    TaxCommand(City* cityRef) : MenuCommand(cityRef){} 

    /**
     * @brief Destroy the TaxCommand object.
     */
    ~TaxCommand() override {}
    
    /**
     * @brief Execute the tax update command.
     * 
     * @param currentMenu Pointer to the current menu.
     */
    void execute(Menu* currentMenu) override {
        string result = "";
        string indentation(2 * 4, ' ');

        cout << "\n" << indentation << "=== Update Tax Menu ===:\n";
        cout << indentation << "Select Tax Type to Change:\n";
        cout << indentation << "a. Income\n";
        cout << indentation << "b. Sales\n";
        cout << indentation << "c. Property\n";
        cout << indentation << "d. Cancel\n";
        
        cout << indentation;
        char input;
        cout << "\n" << indentation << "Enter your choice: ";
        cin >> input;

        switch (input){
            case 'a': 
                result = "Income";
                break;
            case 'b':
                result = "Sales";
                break;
            case 'c':
                result = "Property";
                break;
            default:
                return;
        }

        cout << indentation << "Enter new rate (e.g., 15): ";
        string tax = "";
        cin >> tax;

        cout << "\n" << indentation << "Changing " << result << " Tax to " << tax << "%\n";
        // Tax update logic
        // TODO Tax update logic
        try{
            if(result == "Income"){
                city->setIncomeTaxRate(stod(tax));
            } else if(result == "Sales"){
                city->setSalesTaxRate(stod(tax));
            } else if(result == "Property"){
                city->setPropertyTaxRate(stod(tax));
            }
        }catch(const std::exception& e){
            cout << "Invalid input. Please enter a number.\n";
        }
    }
    
    /**
     * @brief Get the description of the command.
     * 
     * @return const char* Description of the command.
     */
    const char* getDescription() const override {
        return "Update Tax Rates";
    }
};

#endif // TAXCOMMAND_H
