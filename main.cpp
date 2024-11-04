#include "City.h"
#include "CommandUI/MapNode.h"
#include "CommandUI/Menu.h"
#include "CommandUI/BuildCommand.h"
#include "CommandUI/PolicyCommand.h"
#include "CommandUI/ContinueCommand.h"
#include "CommandUI/HelpCommand.h"
#include "CommandUI/ExitCommand.h"
#include "Citizen.h"
#include "CitizenMood/ExcellentMood.h"
#include "CitizenMood/AverageMood.h"
#include "CitizenMood/PoorMood.h"
#include "Observer/CitizenObserver.h"

#include <iostream>
#include <vector>

using namespace std;

void gameIntro();
void makeChanges();
void continueGame();
void showHelp();
void endGame();
void calculateMood(Citizen* citizen, int jobDemand, int jobCapacity, int housing, int traffic);
void printCitizenMoods(City* city);

void gameIntro() {
    // Game introduction logic
}

int main(int argc, char const *argv[]) {
    string name = "LoremIpsum";
    
    cout << "Welcome to CityBuilder\n" << "Please enter the name of your city:\n";
    //cin >> name;
    City* c1 = new City();
    c1->printMap();
    cout << name << " is a great name. Above is a map of your city. It doesnt look like much right now but we'll fix that.\n";
    cout << "As you can see there is a road coming into your city on the top left of your map at the co-ordinates A1.\n";
    //Attaching Observer//
    CitizenObserver* observer = new CitizenObserver();
    c1->attach(observer);
    bool gameActive = true;
    
    // Introduction to the game
    gameIntro();

    // vector<Citizen*> citizens;
    // citizens.push_back(new Citizen("John Doe", 30, "Engineer"));
    // citizens.push_back(new Citizen("Jane Smith", 25, "Doctor"));
    // citizens.push_back(new Citizen("Alice Johnson", 40, "Teacher"));

    c1->addCitizen(new Citizen("John Doe", 30, "Engineer"));
    c1->addCitizen(new Citizen("Jane Smith", 25, "Doctor"));
    c1->addCitizen(new Citizen("Alice Johnson", 40, "Teacher"));

    // for (Citizen* citizen : citizens) {
    //     calculateMood(citizen, 10, 8, 5, 3); 
    //     cout << citizen->getName() << "'s mood health: " << citizen->calculateHealth() << endl;
    // }

    Menu mainMenu("CityBuilder Main Menu");

    mainMenu.addCommand(std::make_shared<BuildCommand>(c1));
    mainMenu.addCommand(std::make_shared<PolicyCommand>(c1));
    mainMenu.addCommand(std::make_shared<ContinueCommand>(c1));
    mainMenu.addCommand(std::make_shared<HelpCommand>(c1));
    mainMenu.addCommand(std::make_shared<ExitCommand>(c1));

    mainMenu.execute();

    // for (Citizen* citizen : citizens) {
    //     delete citizen;
    // }

    //printCitizenMoods(c1);

    return 0;
}

void calculateMood(Citizen* citizen, int jobDemand, int jobCapacity, int housing, int traffic) {
    if (jobDemand > jobCapacity) {
        citizen->setMood(new PoorMood());
    } else if (housing < 5) {
        citizen->setMood(new AverageMood());
    } else if (traffic > 5) {
        citizen->setMood(new AverageMood());
    } else {
        citizen->setMood(new ExcellentMood());
    }
}

void printCitizenMoods(City* city){
    for(Citizen* citizen : city->getCitizens()){
        cout << citizen->getName() << "'s mood: " << typeid(*citizen->getMood()).name() << endl;
    }
}