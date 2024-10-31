#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H
#include "Menu.h"



class ExitCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        cout << "Exiting the program...\n";
        currentMenu->exit(); 
    }
    
    const char* getDescription() const override {
        return "Exit Simulation";
    }
};

#endif // EXITCOMMAND_H
