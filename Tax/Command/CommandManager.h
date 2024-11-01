#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H

#include <vector>
#include "Command.h"

class CommandManager
{
public:
    void executeCommand(Command *command)
    {
        command->execute();
        commandHistory.push_back(command);
    }

    void undoLastCommand()
    {
        if (!commandHistory.empty())
        {
            Command *lastCommand = commandHistory.back();
            lastCommand->undo();
            commandHistory.pop_back();
            delete lastCommand;
        }
    }

    ~CommandManager()
    {
        for (Command *command : commandHistory)
        {
            delete command;
        }
    }

private:
    std::vector<Command *> commandHistory;
};

#endif // COMMANDMANAGER_H
