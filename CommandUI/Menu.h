#ifndef MENU_H
#define MENU_H
#include <vector>
#include <memory>
#include <string>
#include "MenuCommand.h"
#include <iostream>

/**
 * @class Menu
 * @brief Class representing a menu
 * 
 * This class represents a menu. It contains a list of commands and can display them to the user.
 */
class Menu {
private:
    string title; ///< Title of the menu
    int level; ///< Level of the menu
    std::vector<std::shared_ptr<MenuCommand>> commands; ///< List of commands
    Menu* parentMenu; ///< Pointer to the parent menu
    bool shouldExit; ///< Flag to exit the menu

public:
    /**
     * @brief Constructor for Menu
     * @param menuTitle Title of the menu
     * @param parent Pointer to the parent menu
     * @param lvl Level of the menu
     */
    Menu(const string& menuTitle, Menu* parent = nullptr, int lvl = 0) 
        : title(menuTitle), parentMenu(parent), shouldExit(false), level(lvl) {}

    /**
     * @brief Adds a command to the menu
     * @param command Pointer to the command
     */
    void addCommand(shared_ptr<MenuCommand> command) {
        commands.push_back(command);
    }

    /**
     * @brief Displays the menu
     */
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

    /**
     * @brief Executes the menu
     */
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

    /**
     * @brief Exits the menu
     */
    void exit() {
        shouldExit = true;
    }
};

#endif // MENU_H