#ifndef INDUSTRIALCOMMAND_H
#define INDUSTRIALCOMMAND_H
#include "Menu.h"

class IndustrialCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        std::cout << "Enter coordinates (e.g., A1): ";
        std::string coords;
        std::cin >> coords;
        // Building logic here
    }
    
    const char* getDescription() const override {
        return "Build Industrial Building";
    }
};

#endif // INDUSTRIALCOMMAND_H