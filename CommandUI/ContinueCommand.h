#ifndef CONTINUECOMMAND_H
#define CONTINUECOMMAND_H
#include "Menu.h"



class ContinueCommand : public MenuCommand {
public:
    ContinueCommand(City* cityRef) : MenuCommand(cityRef){} 

    ~ContinueCommand() override {}

    void execute(Menu* currentMenu) override {
        Menu continueMenu("Continue Menu", currentMenu);
        cout << "Continuing Simulation";
        city->printMap();

        continueMenu.execute();
    }
    
    const char* getDescription() const override {
        return "Continue Simulation";
    }
};
#endif // CONTINUECOMMAND_H
