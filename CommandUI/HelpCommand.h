#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H
#include "Menu.h"



class HelpCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        Menu helpMenu("Help Menu", currentMenu);
        cout << "Getting Help";

        helpMenu.execute();   
    }
    
    const char* getDescription() const override {
        return "Get Help";
    }
};
#endif // HELPCOMMAND_H