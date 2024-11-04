//
// Created by USER-PC on 2024/10/31.
//

#include <iostream>
#include "ExcellentMood.h"
#include "AverageMood.h"
#include "PoorMood.h"

// we already in this state don't transition
void ExcellentMood::isExcellent(Citizen *c) {}

void ExcellentMood::isAverage(Citizen *c) {
    std::cout << "==============================================================" << std::endl;
    std::cout << "("+c->getName()+"): is Average" << std::endl;


    c->setMood(new AverageMood());
    delete this;
}

void ExcellentMood::isPoor(Citizen *c) {
    std::cout << "==============================================================" << std::endl;
    std::cout << "("+c->getName()+"): is Poor" << std::endl;


    c->setMood(new PoorMood());
    delete this;
}

ExcellentMood::ExcellentMood() {
    this->health = 100;
}
