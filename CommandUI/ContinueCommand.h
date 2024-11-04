#ifndef CONTINUECOMMAND_H
#define CONTINUECOMMAND_H
#include "Menu.h"
#include "../Citizen.h"
#include <random>

class ContinueCommand : public MenuCommand {
private:
    
public:
    ContinueCommand(City* cityRef) : MenuCommand(cityRef){} 

    ~ContinueCommand() override {}

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


            city->addCitizen(new Citizen("Imigrant", age, "Construction Worker"));
        }
        


        //  Current citizens (increment age with visitor?)


        city->printStats();
        city->printMap();

        continueMenu.execute();
    }
    
    const char* getDescription() const override {
        return "Continue Simulation";
    }
};
#endif // CONTINUECOMMAND_H
