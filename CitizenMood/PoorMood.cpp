//
// Created by USER-PC on 2024/10/31.
//

#include <iostream>
#include "PoorMood.h"
#include "AverageMood.h"
#include "ExcellentMood.h"

void PoorMood::isExcellent(Citizen *c) {

    std::cout << "==============================================================" << std::endl;
    std::cout << "("+c->getName()+"): is Excellent" << std::endl;


    c->setMood(new ExcellentMood());
    delete this;
}

void PoorMood::isAverage(Citizen *c) {

    std::cout << "==============================================================" << std::endl;
    std::cout << "("+c->getName()+"): is Average" << std::endl;


    c->setMood(new AverageMood());
    delete this;
}

// already in poor, no need to transition
void PoorMood::isPoor(Citizen *c) {}

PoorMood::PoorMood() {
    this->health = 10;
}
