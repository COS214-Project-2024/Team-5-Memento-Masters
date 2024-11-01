#include "CitizenObserver.h"
#include "City.h"

CitizenObserver::CitizenObserver() : CityObserver(), citizens() {
    //this->subject = nullptr;
}

CitizenObserver::~CitizenObserver() {
    //delete this->subject;
}

// void CitizenObserver::update(bool isTaxIncrease) {
//    //************************ OR *************************//
//    //this->citizens = this->subject->getCitizens();
//    if(this->subject){
//         this->citizens = this->subject->getCitizens();

//         for(Citizen* citizen : this->citizens) {
//             if(citizen){
//                 if(isTaxIncrease){
//                     citizen->setMood("angry"); // OR "bad" or however Citizen will be implemented
//                 }
//                 else{
//                     citizen->setMood("happy"); // OR "good" or however Citizen will be implemented
//                 }
//             }
//         }
//    }
//    else{
//        std::cout << "No subject set" << std::endl;
//    }
// }

void CitizenObserver::update(const std::string& taxType, double newRate) {
    if(this->subject){
        this->citizens = this->subject->getCitizens();

        for(Citizen* citizen : this->citizens) {
            if(citizen){
                if(taxType == "incomeTax"){
                   if(newRate > 0.15){
                       // citizen->setMood(new PoorMood());
                       citizen->setMood("Poor");
                   }else if(newRate > 0.10){
                        //citizen->setMood(new AverageMood());
                        citizen->setMood("Average");
                   } else{
                        //citizen->setMood(new ExcellentMood());
                        citizen->setMood("Excellent");
                   }

                } else if(taxType == "salesTax"){
                    if(newRate > 0.10){
                        //citizen->setMood(new PoorMood());
                        citizen->setMood("Poor");
                    } else if(newRate > 0.05){
                        //citizen->setMood(new AverageMood());
                        citizen->setMood("Average");
                    } else{
                        // citizen->setMood(new ExcellentMood());
                        citizen->setMood("Excellent");
                    }

                } else if(taxType == "propertyTax"){
                    //citizen->setMood(newRate > 0.20 ? "furious" : "neutral"); //satisfied?
                    if(newRate > 0.20){
                        // citizen->setMood(new PoorMood());
                        citizen->setMood("Poor");
                    } else if(newRate > 0.15){
                        // citizen->setMood(new AverageMood());
                        citizen->setMood("Average");
                    } else{
                        // citizen->setMood(new ExcellentMood());
                        citizen->setMood("Excellent");
                    }
                }   
            }
        }
    }
}