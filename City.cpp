#include "City.h"

City::City() : incomeTaxRate(0.0), salesTaxRate(0.0), propertyTaxRate(0.0) {
    //INITIALISE CITY
    // this->name = name;
    // this->taxRate = 0.0;
    initMap(5, 5);
}

City::~City(){
    //DECONSTRUCT CITY
}

void City::setIncomeTaxRate(double rate){
    this->incomeTaxRate = rate;
    notify("incomeTax", rate);
}

void City::setSalesTaxRate(double rate){
    this->salesTaxRate = rate;
    notify("salesTax", rate);
}

void City::setPropertyTaxRate(double rate){
    this->propertyTaxRate = rate;
    notify("propertyTax", rate);
}

void City::attach(CityObserver* observer){
    this->observerList.push_back(observer);

    //REMOVE?
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

        map[rowIndex][colIndex] = MapNode("Grass");  
        
        return true;

    } catch (const std::exception& e) {
        return false;
    }
}

// double City::getTaxRate(){
//     return this->taxRate;
// }   