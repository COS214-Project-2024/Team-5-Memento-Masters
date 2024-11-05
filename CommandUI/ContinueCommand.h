#ifndef CONTINUECOMMAND_H
#define CONTINUECOMMAND_H
#include "Menu.h"
#include "../Citizen.h"
#include <random>

/**
 * @class ContinueCommand
 * @brief Command to continue the simulation.
 * 
 * This command allows the user to continue the simulation
 */
class ContinueCommand : public MenuCommand {
private:
    
public:
    /**
     * @brief Construct a new Continue Command object
     * 
     * @param cityRef Reference to the City object
     */
    ContinueCommand(City* cityRef) : MenuCommand(cityRef){} 

    /**
     * @brief Destroy the Continue Command object
     */
    ~ContinueCommand() override {}

    /**
     * @brief Execute the continue command
     * 
     * @param currentMenu Pointer to the current menu
     */
    void execute(Menu* currentMenu) override {
        Menu continueMenu("Continue Menu", currentMenu);
        cout << "Continuing Simulation\n";

        // Collect taxes
        cout << "\n--- Collecting Tax ---\n";
        double incomeTax = city->getAverageIncome() * city->getTaxRate('I');
        double salesTax = city->getIncomeSpenditure() * city->getAverageIncome() * city->getTaxRate('S');
        double propertyTax = city->getTaxRate('P') * city->getEstimatedBuildValue();

        cout << " - Income Tax = " << incomeTax << "\n";
        cout << " - Sales Tax = " << salesTax << "\n";
        cout << " - Property Tax = " << propertyTax << "\n";

        //Update Citizens
        //  New citizens
        int newCitizens = 0;
        int demand = std::round(city->getJobAvailability() / 2.0);
        if (demand > 0){  //No jobs, no new people
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> dist(0, demand);
            newCitizens = dist(gen);
        }

        for (int i = 0; i < newCitizens; i++){
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<int> dist(1, 90);
            int age = dist(gen);

            city->addCitizen(new Citizen("Imigrant", age, ""));
        }
        
        //  Current citizens (increment age with visitor?)
        for(Citizen* citizen : city->getCitizens()) {
            if(citizen->getJobTitle() == "") {  // Assuming you have a getter for jobTitle
                for (int i = 0; i < city->getJobAvailability(); i++){
                    std::random_device rd;
                    std::mt19937 gen(rd());
                    std::uniform_int_distribution<int> dist(1, 2);
                    int gotJob = dist(gen);
                    if(gotJob == 1){
                        city->incEmployed();
                        exit;
                    }
                }
            }
        }


        city->printStats();
        city->printMap();

        continueMenu.execute();
    }
    
    /**
     * @brief Get the Description of the command
     * 
     * @return const char* Description of the command
     */
    const char* getDescription() const override {
        return "Continue Simulation";
    }
};
#endif // CONTINUECOMMAND_H
