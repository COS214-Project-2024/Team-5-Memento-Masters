
#ifndef MEMENTOMASTERS_AVERAGEMOOD_H
#define MEMENTOMASTERS_AVERAGEMOOD_H

#include "CitizenMood.h"

class AverageMood: public CitizenMood {
public:

    AverageMood();

    void isExcellent(Citizen *c) override;

    void isAverage(Citizen *c) override;

    void isPoor(Citizen *c) override;
};


#endif //MEMENTOMASTERS_AVERAGEMOOD_H
