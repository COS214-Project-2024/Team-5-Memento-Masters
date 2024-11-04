#ifndef CITY_CARETAKER_H
#define CITY_CARETAKER_H

#include <map>
#include "CityMemento.h"

class CityCaretaker {
private:
    std::map<int, CityMemento*> savedStates;

public:
    void addMemento(int year, CityMemento* memento);
    CityMemento* getMemento(int year);
    ~CityCaretaker();
};

#endif // CITY_CARETAKER_H