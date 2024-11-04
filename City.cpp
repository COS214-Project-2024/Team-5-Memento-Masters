#include "City.h"

City::City() : incomeTaxRate(0.0), salesTaxRate(0.0), propertyTaxRate(0.0) {
    //INITIALISE CITY
   // this->taxRate = 0.0;
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
string City::generateReport(){
    RoadReport *roadReport = new RoadReport();
    BuildingReport *buildingReport = new BuildingReport();
    CitizenReport *citizenReport = new CitizenReport();

    for (std::vector<MapNode> &row : map) {   
    for (MapNode node : row) {           
        node.getBuilding()->accept(buildingReport);    

       
        if (Road* road = dynamic_cast<Road*>(node.getBuilding())) {
            road->accept(roadReport);      
        }
    }
}
    for (auto citizen : citizens) {
        citizen->accept(citizenReport);
    }
    string str="Road Report:\n";
    str+=roadReport->generateReport()+"\n";
    str+="Building Report:\n";
    str+=buildingReport->generateReport()+"\n";
    str+="Citizen Report:\n";
    str+=citizenReport->generateReport()+"\n";
    return str;
}
// double City::getTaxRate(){
//     return this->taxRate;
// }   
