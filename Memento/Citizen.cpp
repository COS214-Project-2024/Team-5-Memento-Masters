#include "Citizen.h"
// #include "CommunityServiceStrategy.h"
// #include "PrisonStrategy.h"
// #include "DeathSentenceStrategy.h"
// #include "ComplaintRouter.h"
#include <stdexcept>


// Citizen::Citizen(const string &name, int age, const string &jobTitle) //updated
//     : name(name), jobTitle(jobTitle), 
//       mood(NULL), punishmentStrategy(NULL) {}


void Citizen::setMood(CitizenMood *mood) {
    this->mood = mood;
}

CitizenMood *Citizen::getMood() const {
    return mood;
}

// Basic attributes methods
const string &Citizen::getName() const {
    return name;
}

void Citizen::setName(const string &name) {
    Citizen::name = name;
}

int Citizen::getAge() const {
    return age;
}

void Citizen::setAge(int age) {
    Citizen::age = age;
}

const string &Citizen::getJobTitle() const {
    return jobTitle;
}

void Citizen::setJobTitle(const string &jobTitle) {
    Citizen::jobTitle = jobTitle;
}

bool Citizen::hasCriminalRecord() const { //updated
    return !crimes.empty();
}


const vector<string> &Citizen::getCrimes() const {
    return crimes;
}

void Citizen::setCrimes(const vector<string> &crimes) {
    Citizen::crimes = crimes;
}

// int Citizen::calculateHealth() {
//     return this->mood->getHealth();
// }

// // COMPLAINT CHAIN INTEGRATION
// void Citizen::makeComplaint(const string& complaint) {
//     ComplaintRouter* router = ComplaintRouter::getInstance();
//     router->handleComplaint(complaint);
//     if (complaint == "noise" || complaint == "transport" || complaint == "utilities") {
//         this->mood->isPoor(this);
//     } else {
//         this->mood->isAverage(this);
//     }
// }

// // Crime and punishment (Strategy Pattern)
// void Citizen::setPunishmentStrategy(CrimePunishmentStrategy* strategy) { //new
//     delete punishmentStrategy;
//     punishmentStrategy = strategy;
// }

// string Citizen::punish(const string& crime) { //new
//     if (punishmentStrategy != NULL) {
//         delete punishmentStrategy;
//     }
    
//     if (crime == "A" || crime == "murder" || crime == "Murder") {
//         punishmentStrategy = new DeathSentenceStrategy();
//     }
//     else if (crime == "B" ||crime == "serious crime" || crime == "Serious Crime" || crime == "robbery" || crime == "Robbery") {
//         punishmentStrategy = new PrisonStrategy();
//     }
//     else if (crime == "C" ||crime == "petty crime" || crime == "Petty Crime" || crime == "vandalism" || crime == "Vandalism") {
//         punishmentStrategy = new CommunityServiceStrategy();
//     }
//     else {
//         return "Unknown crime type: " + crime + ". No punishment.";
//     }

//     return punishmentStrategy->punishCrime(crime);
// }

void Citizen::addCrime(const string& crime) {  //new
    crimes.push_back(crime);
}


// OLD STARTEGY METHODS (revert back if neccessary):

// Citizen::Citizen(const std::string &name, int age, bool hasCriminalRecord, const std::string &jobTitle, std::unique_ptr<CrimePunishmentStrategy> strategy)
//     : name(name), age(age), hasCriminalRecord(hasCriminalRecord), jobTitle(jobTitle), mood(nullptr), strategy(std::move(strategy)) {


// void Citizen::commitCrime(const string& crime) {
//     if (crime == "petty") {
//         setPunishmentStrategy(make_unique<CommunityServiceStrategy>());
//     } else if (crime == "serious") {
//         setPunishmentStrategy(make_unique<PrisonStrategy>());
//     } else if (crime == "murder") {
//         setPunishmentStrategy(make_unique<DeathSentenceStrategy>());
//     } else {
//         throw invalid_argument("Unknown crime type");
//     }
// }

// void Citizen::setPunishmentStrategy(unique_ptr<CrimePunishmentStrategy> newStrategy) {
//     strategy = move(newStrategy);
// }

// string Citizen::receivePunishmentForCrime(const string& crime) const {
//     return strategy ? strategy->punishCrime(crime) : "No punishment strategy set.";
// }

// bool Citizen::isHasCriminalRecord() const {  
//     return hasCriminalRecord;
// }

// void Citizen::setHasCriminalRecord(bool hasCriminalRecord) {
//     Citizen::hasCriminalRecord = hasCriminalRecord;
// }