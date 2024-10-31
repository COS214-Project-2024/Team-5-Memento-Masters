#include "City.h"
#include "MapNode.h"
#include "Menu.h"
#include "BuildCommand.h"
#include "PolicyCommand.h"
#include "ContinueCommand.h"
#include "HelpCommand.h"
#include "ExitCommand.h"

#include <iostream>
using namespace std;

// Function prototypes
void gameIntro();
void makeChanges();
void continueGame();
void showHelp();
void endGame();

void gameIntro(){
    string name = "LoremIpsum";
    
    cout << "Welcome to CityBuilder\n" << "Please enter the name of your city:\n";
    //cin >> name;
    City* c1 = new City(5,5, name);
    c1->printMap();
    cout << name << " is a great name. Above is a map of your city. It doesnt look like much right now but we'll fix that.\n";
    cout << "As you can see there is a road coming into your city on the top left of your map at the co-ordinates A1.\n";
}

void makeChanges() { 
    cout << "Making changes...\n"; 
    int input = 0;
    cout << "What would you like to do?\n";
    cout << "1. Build\n"; 
    cout << "2. Change Policy/Tax\n"; 
    cout << "3. Back\n";

    cin >> input;
        cout << "\n";
        
        switch (input){
            case 1:
                cout << "Select type of building\n"; 
                cout << "1. Residential\n"; 
                cout << "2. Commercial\n"; 
                cout << "3. Industrial\n"; 
                cout << "4. Transport\n"; 
                cout << "5. Back\n";
                break;
            case 2:
                cout << "Select change to make\n"; 
                cout << "1. Adjust income tax rate\n"; 
                cout << "2. Adjust property tax\n"; 
                cout << "3. Adjust sales tax\n"; 
                cout << "4. Set/Remove policy\n"; 
                cout << "5. Back\n";
                break;
            case 3:
                continueGame();
                break;
            default:
                cout << "Invalid option. Please enter a number between 1 and 3.\n";
                break;
        }
}

void continueGame() { cout << "Continuing the game...\n"; }

void showHelp() { cout << "Showing help...\n"; }

void endGame() { cout << "Ending the game...\n"; }

int main(int argc, char const *argv[])
{
    bool gameActive = true;
    
    /*Introduction to the game*/
    gameIntro();

    Menu mainMenu("CityBuilder Main Menu");

    mainMenu.addCommand(std::make_shared<BuildCommand>());
    mainMenu.addCommand(std::make_shared<PolicyCommand>());
    mainMenu.addCommand(std::make_shared<ContinueCommand>());
    mainMenu.addCommand(std::make_shared<HelpCommand>());
    mainMenu.addCommand(std::make_shared<ExitCommand>());

    mainMenu.execute();

    // int playerInput = 0;
    // while(gameActive == true){
    //     cout << "\n1. Make changes\n";
    //     cout << "2. Continue\n";
    //     cout << "3. Help\n";
    //     cout << "4. End Game\n";

    //     cin >> playerInput;
    //     cout << "\n";
        
    //     switch (playerInput){
    //         case 1:
    //             makeChanges();
    //             break;
    //         case 2:
    //             continueGame();
    //             break;
    //         case 3:
    //             showHelp();
    //             break;
    //         case 4:
    //             endGame();
    //             gameActive = false;
    //             break;
    //         default:
    //             cout << "Invalid option. Please enter a number between 1 and 4.\n";
    //             break;
    //     }

    // }

    return 0;
}
