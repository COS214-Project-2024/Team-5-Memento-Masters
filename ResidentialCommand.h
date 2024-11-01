#ifndef RESIDENTIALCOMMAND_H
#define RESIDENTIALCOMMAND_H
#include "Menu.h"

class ResidentialCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        string indentation(2 * 4, ' ');
        cout << indentation << "Enter coordinates (e.g., A1): ";
        string coords;
        cin >> coords;
        // Building logic here
    }
    
    const char* getDescription() const override {
        return "Build Residential Building";
    }
};

#endif // RESIDENTIALCOMMAND_H
