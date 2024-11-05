#include "City.h"
#include "Tax/TaxSystem.h"

int City::currentYear = 2024;

City::City() : incomeTaxRate(0.0), salesTaxRate(0.0), propertyTaxRate(0.0) {
    //INITIALISE CITY
    // this->name = name;
    // this->taxRate = 0.0;
    initMap(5, 5);
    budget = 1000000;
    population = 0;
    crimeRate = 0;
    housingCapacity = 0;
    housingDemand = 0;
    powerCapacity = 0;
    powerDemand = 0;
    employed = 0;
    jobCapacity = 0;
    trafficIndex = 0;
    entertainmentIndex = 0;
    healthcareIndex = 0;
    educationIndex = 0;
    averageIncome = 0;
    incomeSpeniture = 0;
    estimetedBuildValue = 0;
}

int City::getCurrentYear() {
    return currentYear;
}

void City::setCurrentYear(int year) {
    currentYear = year;
}

City::~City(){
    //DECONSTRUCT CITY
}

void City::setIncomeTaxRate(double rate) {
    TaxAuth->setIncomeTaxRate(rate);
    notify("Income Tax", rate);
}

void City::setSalesTaxRate(double rate) {
    TaxAuth->setSalesTaxRate(rate);
    notify("Sales Tax", rate);
}

void City::setPropertyTaxRate(double rate) {
    TaxAuth->setPropertyTaxRate(rate);
    notify("Property Tax", rate);
}

void City::attach(CityObserver* observer){
    this->observerList.push_back(observer);
    observer->setSubject(this);
}

void City::detach(CityObserver* observer){
   auto it = std::find(observerList.begin(), observerList.end(), observer);
   if(it != observerList.end()){
       observerList.erase(it);
   }
}


void City::notify(const std::string& taxType, double newRate){
    for(CityObserver* observer : this->observerList) {
        // observer->update();
        observer->update(taxType, newRate);
    }
}

std::vector<Citizen*> City::getCitizens(){
    return this->citizens;
}

void City::addCitizen(Citizen* citizen){
    this->citizens.push_back(citizen);
    population++;
}

void City::initMap(int width, int height){
// Initialize map with default nodes for demonstration
    map.resize(height, vector<MapNode>(width, MapNode("Grass")));
}

void City::printMap() {
    // Print the top coordinates
    std::cout << "   ";
    for (char colLabel = 'A'; colLabel < 'A' + map[0].size(); ++colLabel) {
        std::cout << "  " << colLabel << "   ";
    }
    std::cout << std::endl;

    // Print the map with row coordinates
    for (size_t rowIndex = 0; rowIndex < map.size(); ++rowIndex) {
        std::cout << "   ";
        for (size_t i = 0; i < map[rowIndex].size(); ++i) {
            std::cout << "----- ";
        }
        std::cout << std::endl;

        std::cout << std::setw(2) << rowIndex + 1 << " "; // Row index with padding

        // Print each MapNode in the row
        for (const auto& node : map[rowIndex]) {
            std::cout << "|" << node.printNode() << "| ";
        }
        std::cout << std::endl; 
    }
    std::cout << "   ";
    for (size_t i = 0; i < map[0].size(); ++i) {
        std::cout << "----- ";
    }
    std::cout << std::endl;
}

string City::checkCoord(string coord, bool forRemoval){
    if (coord.length() < 2) {
        return "\nInvalid Co-ordinate";
    }

    char colLetter = coord[0];
    int colIndex = toupper(colLetter) - 'A';

    int rowIndex = stoi(coord.substr(1)) - 1;

    if (rowIndex < 0 || rowIndex >= map.size() || colIndex < 0 || colIndex >= map[0].size()) {
        return "\n" + coord + " out of bounds";
    }

    if (forRemoval == false){
        if (map[rowIndex][colIndex].getBuilding() != nullptr){
            return "Building already exists at " + coord;
        }
    }
   
    return "";
}

void City::constructBuilding(string buildingType, string coord, Building* buildptr){
    string check = checkCoord(coord);

    char colLetter = coord[0];
    int colIndex = toupper(colLetter) - 'A';

    int rowIndex = stoi(coord.substr(1)) - 1;

    if (check == ""){
        map[rowIndex][colIndex] = MapNode(buildingType, buildptr);
    }

    if (buildingType == "Factory"){
        jobCapacity = jobCapacity + 10;
        powerDemand = powerDemand + 5;
    } else if (buildingType == "Power Plant"){
        powerCapacity = powerCapacity + 50;
    } else if (buildingType == "Shop"){
        jobCapacity = jobCapacity + 4;
        powerDemand = powerDemand + 1;
    } else if (buildingType == "Mall"){
        jobCapacity = jobCapacity + 15;
        powerDemand = powerDemand + 3;
    } else if (buildingType == "Office"){
        jobCapacity = jobCapacity + 12;
        powerDemand = powerDemand + 3;
    } else if (buildingType == "House"){
        housingCapacity = housingCapacity + 4;
        powerDemand = powerDemand + 1;
    } else if (buildingType == "Apartment"){
        housingCapacity = housingCapacity + 20;
        powerDemand = powerDemand + 2;
    } else if (buildingType == "Park"){
        entertainmentIndex = entertainmentIndex + 5;
    } else if (buildingType == "Monument"){
        entertainmentIndex = entertainmentIndex + 2;
    } else if (buildingType == "Road"){

    } else if (buildingType == "Airport"){
        jobCapacity = jobCapacity + 10;
        powerDemand = powerDemand + 3;
    } else if (buildingType == "Train Station"){
        jobCapacity = jobCapacity + 5;
        powerDemand = powerDemand + 2;
    }

    
}

bool City::hasBuildingAt(int row, int col) const {
    return map[row][col].getBuilding() != nullptr;
}

string City::getBuildingTypeAt(int row, int col) const {
    if (hasBuildingAt(row, col)) {
        return map[row][col].getType();
    }
    return "Empty";
}

bool City::demolishBuilding(const string& coord) {

    try {
        char colLetter = coord[0];
        int colIndex = toupper(colLetter) - 'A';
        int rowIndex = stoi(coord.substr(1)) - 1;

        if (rowIndex < 0 || rowIndex >= map.size() || 
            colIndex < 0 || colIndex >= map[0].size()) {
            return false;
        }


        string buildingType = getBuildingTypeAt(rowIndex, colIndex);
        if (buildingType == "Factory"){
            jobCapacity = jobCapacity - 10;
            powerDemand = powerDemand - 5;
        } else if (buildingType == "Power Plant"){
            powerCapacity = powerCapacity - 50;
        } else if (buildingType == "Shop"){
            jobCapacity = jobCapacity - 4;
            powerDemand = powerDemand - 1;
        } else if (buildingType == "Mall"){
            jobCapacity = jobCapacity - 15;
            powerDemand = powerDemand - 3;
        } else if (buildingType == "Office"){
            jobCapacity = jobCapacity - 12;
            powerDemand = powerDemand - 3;
        } else if (buildingType == "House"){
            housingCapacity = housingCapacity - 4;
            powerDemand = powerDemand - 1;
        } else if (buildingType == "Apartment"){
            housingCapacity = housingCapacity - 20;
            powerDemand = powerDemand - 2;
        } else if (buildingType == "Park"){
            entertainmentIndex = entertainmentIndex - 5;
        } else if (buildingType == "Monument"){
            entertainmentIndex = entertainmentIndex - 2;
        } else if (buildingType == "Road"){

        } else if (buildingType == "Airport"){
            jobCapacity = jobCapacity - 10;
            powerDemand = powerDemand - 3;
        } else if (buildingType == "Train Station"){
            jobCapacity = jobCapacity - 5;
            powerDemand = powerDemand - 2;
        }

        map[rowIndex][colIndex] = MapNode("Grass");  
        
        return true;

    } catch (const std::exception& e) {
        return false;
    }
}

void City::printStats(){
    cout << "\n=== City Stats ===\n";
    cout << " - Population: " << population << "\n";
    std::cout << std::fixed << std::setprecision(0);
    cout << " - Budget: " << budget << "\n";
    cout << " - Power Demand: " << powerDemand << "/" << powerCapacity << "\n";
    cout << " - Job Demand: " << employed << "/" << jobCapacity << "\n";
    cout << " - Housing Demand: " << housingDemand << "/" << housingCapacity << "\n";
}

bool City::updateBudget(double amount){
    if (budget + amount >= 0){
        budget = budget + amount;
        return true;
    } 
    return false;
}

double City::getTaxRate(char type) {
    switch (type) {
        case 'I': return TaxAuth->getIncomeTaxRate();
        case 'S': return TaxAuth->getSalesTaxRate();
        case 'P': return TaxAuth->getPropertyTaxRate();
        default: throw std::invalid_argument("Invalid Input you Dumbass...I - Income, S - Sales, P - Property");
    }
}

double City::getIncomeTaxRate() const {
    return TaxAuth->getIncomeTaxRate();
}

double City::getSalesTaxRate() const {
    return TaxAuth->getSalesTaxRate();
}

double City::getPropertyTaxRate() const {
    return TaxAuth->getPropertyTaxRate();
}

double City::getAverageIncome(){
    return averageIncome;
}

double City::getIncomeSpenditure(){
    return incomeSpeniture;
}

double City::getEstimatedBuildValue(){
    return estimetedBuildValue;
}

void City::updateEstimatedBuildValue(double amount){
    estimetedBuildValue = estimetedBuildValue + amount;
}

int City::getJobAvailability(){
    return jobCapacity - employed;
}

void City::incEmployed(){
    employed++;
}

CityMemento* City::saveToMemento() {
    return new CityMemento(
        TaxAuth->getIncomeTaxRate(), TaxAuth->getSalesTaxRate(), TaxAuth->getPropertyTaxRate(),
        population, name, budget, crimeRate, housingCapacity, housingDemand, powerCapacity,
        powerDemand, jobCapacity, employed,
        trafficIndex, entertainmentIndex, healthcareIndex, educationIndex,
        averageIncome, incomeSpeniture, estimetedBuildValue, currentYear
    );
}

void City::restoreFromMemento(CityMemento* memento) {
    TaxAuth->setIncomeTaxRate(memento->incomeTaxRate);
    TaxAuth->setSalesTaxRate(memento->salesTaxRate);
    TaxAuth->setPropertyTaxRate(memento->propertyTaxRate);
    population = memento->population;
    name = memento->name;
    budget = memento->budget;
    crimeRate = memento->crimeRate;
    housingCapacity = memento->housingCapacity;
    housingDemand = memento->housingDemand;
    powerCapacity = memento->powerCapacity;
    powerDemand = memento->powerDemand;
    jobCapacity = memento->jobCapacity;
    employed = memento->employed; 
    trafficIndex = memento->trafficIndex;
    entertainmentIndex = memento->entertainmentIndex;
    healthcareIndex = memento->healthcareIndex;
    educationIndex = memento->educationIndex;
    averageIncome = memento->averageIncome;
    incomeSpeniture = memento->incomeSpeniture;
    estimetedBuildValue = memento->estimetedBuildValue;
    currentYear = memento->year;
}