#ifndef TRANSPORTCOMMAND_H
#define TRANSPORTCOMMAND_H
#include "Menu.h"

class TransportCommand : public MenuCommand {
public:
    void execute(Menu* currentMenu) override {
        std::cout << "Enter coordinates (e.g., A1): ";
        std::string coords;
        std::cin >> coords;
        // Building logic here
    }
    
    const char* getDescription() const override {
        return "Build Transportation";
    }
};

#endif // TRANSPORTCOMMAND_H