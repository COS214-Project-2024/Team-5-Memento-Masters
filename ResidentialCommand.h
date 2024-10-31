#ifndef RESIDENTIALCOMMAND_H
#define RESIDENTIALCOMMAND_H
#include "Menu.h"

class ResidentialCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        std::cout << "Enter coordinates (e.g., A1): ";
        std::string coords;
        std::cin >> coords;
        // Building logic here
    }
    
    const char* getDescription() const override {
        return "Build Residential Building";
    }
};

#endif // RESIDENTIALCOMMAND_H
