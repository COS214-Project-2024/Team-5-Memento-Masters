// main.cpp to test strategy and citizen 
#include <iostream>
#include "Citizen.h"
#include "CrimePunishmentStrategy.h"
#include "CommunityServiceStrategy.h"
#include "PrisonStrategy.h"
#include "DeathSentenceStrategy.h"

void printCitizenInfo(const Citizen& citizen) {
    try {
        cout << "\nCitizen Information:" << endl;
        cout << "Name: " << citizen.getName() << endl;
        cout << "Age: " << citizen.getAge() << endl;
        cout << "Job: " << citizen.getJobTitle() << endl;
        cout << "Has Criminal Record: " << (citizen.hasCriminalRecord() ? "Yes" : "No") << endl;
        
        cout << "Crimes committed: ";
        const vector<string>& crimes = citizen.getCrimes();
        if (crimes.empty()) {
            cout << "None" << endl;
        } else {
            cout << endl;
            for (const string& crime : crimes) {
                cout << "- " << crime << endl;
            }
        }
        cout << "----------------------------------------" << endl;
    } catch (const exception& e) {
        cout << "Error printing citizen info: " << e.what() << endl;
    }
}

int main() {
    try {
        cout << "Testing Crime Punishment Strategy Pattern\n" << endl;

    

    // Create a citizen
    Citizen citizen1("John Smith", 25, "Software Engineer");
    cout << "Created new citizen: " << citizen1.getName() << endl;
    printCitizenInfo(citizen1);

    // Test 1: Petty Crime
    cout << "\nTest 1: Petty Crime" << endl;
    citizen1.addCrime("petty crime");
    string punishment1 = citizen1.punish("petty crime");
    cout << punishment1 << endl;
    printCitizenInfo(citizen1);

    // Test 2: Vandalism (another petty crime)
    cout << "\nTest 2: Vandalism" << endl;
    citizen1.addCrime("vandalism");
    string punishment2 = citizen1.punish("vandalism");
    cout << punishment2 << endl;
    printCitizenInfo(citizen1);

    // Create another citizen
    Citizen citizen2("Jane Doe", 30, "Bank Teller");
    cout << "\nCreated new citizen: " << citizen2.getName() << endl;
    printCitizenInfo(citizen2);

    // Test 3: Serious Crime
    cout << "\nTest 3: Serious Crime" << endl;
    citizen2.addCrime("serious crime");
    string punishment3 = citizen2.punish("serious crime");
    cout << punishment3 << endl;
    printCitizenInfo(citizen2);

    // Test 4: Robbery
    cout << "\nTest 4: Robbery" << endl;
    citizen2.addCrime("robbery");
    string punishment4 = citizen2.punish("robbery");
    cout << punishment4 << endl;
    printCitizenInfo(citizen2);

    // Create a third citizen
   

        // Test 5: Murder
        cout << "\nTest 5: Murder" << endl;
        Citizen citizen3("Bob Wilson", 35, "Construction Worker");
        cout << "Created new citizen: " << citizen3.getName() << endl;
        printCitizenInfo(citizen3);

        citizen3.addCrime("murder");
        string punishment5 = citizen3.punish("murder");
        cout << punishment5 << endl;
        printCitizenInfo(citizen3);

        // Test 6: Unknown Crime
        cout << "\nTest 6: Unknown Crime" << endl;
        string punishment6 = citizen3.punish("jaywalking");
        cout << punishment6 << endl;
        printCitizenInfo(citizen3);

        // Test 7: Manual Strategy Assignment
        cout << "\nTest 7: Manual Strategy Assignment" << endl;
        Citizen citizen4("Alice Brown", 28, "Teacher");
        cout << "Created new citizen: " << citizen4.getName() << endl;
        printCitizenInfo(citizen4);

        // Test each strategy manually
        CommunityServiceStrategy* communityService = new CommunityServiceStrategy();
        cout << "\nTesting Community Service Strategy:" << endl;
        citizen4.setPunishmentStrategy(communityService);
        cout << citizen4.punish("petty crime") << endl;

        PrisonStrategy* prison = new PrisonStrategy();
        cout << "\nTesting Prison Strategy:" << endl;
        citizen4.setPunishmentStrategy(prison);
        cout << citizen4.punish("robbery") << endl;

        DeathSentenceStrategy* deathSentence = new DeathSentenceStrategy();
        cout << "\nTesting Death Sentence Strategy:" << endl;
        citizen4.setPunishmentStrategy(deathSentence);
        cout << citizen4.punish("murder") << endl;

        printCitizenInfo(citizen4);

        // Cleanup
        delete communityService;
        delete prison;
        delete deathSentence;

        cout << "\nAll tests completed successfully!" << endl;

        return 0;
    } catch (const exception& e) {
        cout << "Error during test execution: " << e.what() << endl;
        return 1;
    }
}
