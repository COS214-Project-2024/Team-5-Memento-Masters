#include "City.h"
#include "CommandUI/MapNode.h"
#include "CommandUI/Menu.h"
#include "CommandUI/BuildCommand.h"
#include "CommandUI/PolicyCommand.h"
#include "CommandUI/ContinueCommand.h"
#include "CommandUI/HelpCommand.h"
#include "CommandUI/ExitCommand.h"

#include <iostream>
using namespace std;

// THIS IS BASICALLY OUR PRODUCTION MAIN...
// ...AND WE'RE GOING TO USE IT TO TEST OUR CODE
// ...AND MAKE SURE IT WORKS AS EXPECTED

// THIS IS WHERE WE ARE HAPPY WITH OUR CODE AND TESTING WE CAN ADD IT TO OUR PRODUCTION CODE


// Function prototypes
void gameIntro();
void makeChanges();
void continueGame();
void showHelp();
void endGame();

void gameIntro(){
    
}

int main(int argc, char const *argv[])
{
    // Initialize your components here
    //
    //
    //

    // Add your production code here once you are happy with the testing
    //
    //
    //
    string name = "LoremIpsum";
    
    cout << "Welcome to CityBuilder\n" << "Please enter the name of your city:\n";
    //cin >> name;
    City* c1 = new City();
    c1->printMap();
    cout << name << " is a great name. Above is a map of your city. It doesnt look like much right now but we'll fix that.\n";
    cout << "As you can see there is a road coming into your city on the top left of your map at the co-ordinates A1.\n";

    bool gameActive = true;
    
    //Introduction to the game
    gameIntro();

    Menu mainMenu("CityBuilder Main Menu");

    mainMenu.addCommand(std::make_shared<BuildCommand>(c1));
    mainMenu.addCommand(std::make_shared<PolicyCommand>(c1));
    mainMenu.addCommand(std::make_shared<ContinueCommand>(c1));
    mainMenu.addCommand(std::make_shared<HelpCommand>(c1));
    mainMenu.addCommand(std::make_shared<ExitCommand>(c1));

    mainMenu.execute();

    return 0;
}
