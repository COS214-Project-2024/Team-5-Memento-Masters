#ifndef MENUCOMMAND_H
#define MENUCOMMAND_H

class Menu;

class MenuCommand {
public:
    virtual ~MenuCommand() = default;
    virtual void execute(Menu* currentMenu) = 0;
    virtual const char* getDescription() const = 0;
};

#endif // MENUCOMMAND_H
