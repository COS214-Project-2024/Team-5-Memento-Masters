//STRATEGY MAIN:

#include <iostream>
#include "Citizen.h"

int main() {
    Citizen john("John Doe");  
    Citizen alice("Alice");
    Citizen bob("Bob");

    std::cout << "\n------------------------TESTING STRATEGY DESIGN PATTERN----------------------------------------\n\n";

    john.commitCrime("petty");
    std::cout << john.getName() << ": " << john.receivePunishmentForCrime("petty theft") << std::endl << std::endl;

    john.commitCrime("serious");
    std::cout << john.getName() << ": " << john.receivePunishmentForCrime("burglary") << std::endl << std::endl;

    alice.commitCrime("murder");
    std::cout << alice.getName() << ": " << john.receivePunishmentForCrime("murder") << std::endl << std::endl;

    std::cout << "\n------------------------END OF STRATEGY DESIGN PATTERN----------------------------------------\n\n";

    return 0;
}
