#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H

#include <iostream>
#include <vector>
#include <stack>
#include "TaxSystem.h"
#include "AdjustTaxCommand.h"
#include "Command.h"
#include "BuildCommand.h"
#include "BuildingFactory.h"

class CommandManager {
public:
    // CommandManager();
    
    void addCommand(Command* command);
    
    void executeCommands();

    void undoLastCommand();

    ~CommandManager();


    private:
    std::vector<Command*> commandHistory; // useful when want to batch execute a group of (pending) commands together 
    std::stack<Command*> executedCommands; // stack for undo functionality. when a command is executed from the commandHistory, it is pushed onto this stack.
};

#endif // COMMANDMANAGER_H


