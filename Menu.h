#ifndef MENU_H
#define MENU_H
#include <vector>
#include <memory>
#include <string>
#include "MenuCommand.h"
#include <iostream>
using namespace std;

class Menu {
private:
    string title;
    int level;
    vector<shared_ptr<MenuCommand>> commands;
    Menu* parentMenu;
    bool shouldExit;

public:
    Menu(const string& menuTitle, Menu* parent = nullptr, int lvl = 0) 
        : title(menuTitle), parentMenu(parent), shouldExit(false), level(lvl) {}

    void addCommand(shared_ptr<MenuCommand> command) {
        commands.push_back(command);
    }

    void display() const {
        string indentation(level * 4, ' ');
        cout << "\n" << indentation << "=== " << title << " ===\n";
        for (size_t i = 0; i < commands.size(); i++) {
            cout << indentation << i + 1 << ". " << commands[i]->getDescription() << "\n";
        }
        if (parentMenu) {
            cout << indentation << commands.size() + 1 << ". Back\n";
        }
        cout << "\n" << indentation << "Enter your choice: ";
    }

    void execute() {
        while (!shouldExit) {
            display();
            
            int choice;
            if (!(cin >> choice)) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            if (parentMenu && choice == commands.size() + 1) {
                return;  // Return to parent menu
            }
            
            if (choice > 0 && choice <= static_cast<int>(commands.size())) {
                commands[choice - 1]->execute(this);  // Pass current menu to command
            } else {
                std::cout << "Invalid option. Please try again.\n";
            }
        }
    }

    void exit() {
        shouldExit = true;
    }
};

#endif // MENU_H