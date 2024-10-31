//
// Created by USER-PC on 2024/10/31.
//

#ifndef MEMENTOMASTERS_POORMOOD_H
#define MEMENTOMASTERS_POORMOOD_H

#include "CitizenMood.h"
class PoorMood: public CitizenMood{
public:
    PoorMood();

public:
    void isExcellent(Citizen *c) override;

    void isAverage(Citizen *c) override;

    void isPoor(Citizen *c) override;
};


#endif //MEMENTOMASTERS_POORMOOD_H
