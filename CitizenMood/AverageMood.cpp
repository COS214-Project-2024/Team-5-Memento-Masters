//
// Created by USER-PC on 2024/10/31.
//

#include <iostream>
#include "AverageMood.h"
#include "ExcellentMood.h"
#include "PoorMood.h"

void AverageMood::isExcellent(Citizen *c) {
    std::cout << "==============================================================" << std::endl;
    std::cout << "("+c->getName()+"): is Excellent" << std::endl;


    c->setMood(new ExcellentMood());
    delete this;
}


// already in this state, don't transition
void AverageMood::isAverage(Citizen *c) {}



void AverageMood::isPoor(Citizen *c) {
    std::cout << "==============================================================" << std::endl;
    std::cout << "("+c->getName()+"): is Poor" << std::endl;


    c->setMood(new PoorMood());
    delete this;
}

AverageMood::AverageMood() {
    this->health = 50;
}
