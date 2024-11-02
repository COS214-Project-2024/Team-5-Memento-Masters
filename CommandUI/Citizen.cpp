#include "Citizen.h"
#include "CitizenMood.h"
#include "AverageMood.h"

Citizen::Citizen(string name){ //Baby
    this->name = name;
    this->age = 0;
    this->mood = new AverageMood();
    this->hasCriminalRecord = false;
}

Citizen::Citizen(string name, int age){  //Migrant
    this->name = name;
    this->age = age;
    this->mood = new AverageMood();
    this->hasCriminalRecord = false;
}

void Citizen::setMood(string mood){

}

string Citizen::getMood(){
    return mood->getMood();
}

int Citizen::calculateHealth(){

}

void Citizen::makeComplaint(string complaint){

}

void Citizen::punish(string crime){

}

void Citizen::accept(Visitor *visitor){
    // TODO
}

Citizen::~Citizen()
{

}