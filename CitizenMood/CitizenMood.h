
#ifndef MEMENTOMASTERS_CITIZENMOOD_H
#define MEMENTOMASTERS_CITIZENMOOD_H


#include "string"
#include "vector"

#include "Citizen.h"

using namespace std;

class Citizen;

class CitizenMood {
protected:
    int health = 0;
public:
    int getHealth() const;
    virtual void isExcellent(Citizen* c) = 0;
    virtual void isAverage(Citizen* c) = 0;
    virtual void isPoor(Citizen* c) = 0;


};


#endif //MEMENTOMASTERS_CITIZENMOOD_H
