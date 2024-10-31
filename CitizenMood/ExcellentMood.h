//
// Created by USER-PC on 2024/10/31.
//

#ifndef MEMENTOMASTERS_EXCELLENTMOOD_H
#define MEMENTOMASTERS_EXCELLENTMOOD_H

#include "CitizenMood.h"

class ExcellentMood: public CitizenMood{
public:
    ExcellentMood();

    void isExcellent(Citizen *c) override;

    void isAverage(Citizen *c) override;

    void isPoor(Citizen *c) override;
};


#endif //MEMENTOMASTERS_EXCELLENTMOOD_H
