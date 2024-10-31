#ifndef COMMERCIALCOMMAND_H
#define COMMERCIALCOMMAND_H
#include "Menu.h"

class CommercialCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        std::cout << "Enter coordinates (e.g., A1): ";
        std::string coords;
        std::cin >> coords;
        // Building logic here
    }
    
    const char* getDescription() const override {
        return "Build Commercial Building";
    }
};

#endif // COMMERCIALCOMMAND_H
