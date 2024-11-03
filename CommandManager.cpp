#include "CommandManager.h"
#include <iostream>

void CommandManager::addCommand(Command* command) {
    commandHistory.push_back(command);
}

void CommandManager::executeCommands() {
    for (Command* command : commandHistory) {
        command->execute();
        executedCommands.push(command); // push command onto stack after execution
    }
    commandHistory.clear(); // clear queue after execution
}

void CommandManager::undoLastCommand() {
    if (!executedCommands.empty()) {
        Command* lastCommand = executedCommands.top();
        executedCommands.pop();
        
        lastCommand->undo(); 
        delete lastCommand; // clean up
        std::cout << "Last command undone.\n";
    } else {
        std::cout << "No commands to undo.\n";
    }
}

CommandManager::~CommandManager() {
    for (Command* command : commandHistory) {
        delete command; // ensure all commands deleted
    }
    while (!executedCommands.empty()) {
        delete executedCommands.top(); // clean up executed commands
        executedCommands.pop();
    }
}
