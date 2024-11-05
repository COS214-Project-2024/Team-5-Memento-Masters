#ifndef MENUCOMMAND_H
#define MENUCOMMAND_H

#include "../City.h"

class Menu;

/**
 * @class MenuCommand
 * @brief Abstract class for menu commands
 * 
 * This class is the base class for all menu commands. It provides a common interface for all menu commands.
 */
class MenuCommand {
protected:
    City* city; ///< Pointer to the city object
public:
    /**
     * @brief Constructor
     * @param c Pointer to the city object
     */
    MenuCommand(City* c) : city(c) {};

    /**
     * @brief Destructor
     */
    virtual ~MenuCommand() = default;

    /**
     * @brief Executes the command
     * @param currentMenu Pointer to the current menu
     */
    virtual void execute(Menu* currentMenu) = 0;

    /**
     * @brief Gets the description of the command
     * @return The description of the command
     */
    virtual const char* getDescription() const = 0;
};

#endif // MENUCOMMAND_H
