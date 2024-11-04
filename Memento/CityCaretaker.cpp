#include "CityCaretaker.h"

void CityCaretaker::addMemento(int year, CityMemento* memento) {
    auto it = savedStates.find(year);
    if (it != savedStates.end()) {
        delete it->second;
    }
    savedStates[year] = memento;
}

CityMemento* CityCaretaker::getMemento(int year) {
    auto it = savedStates.find(year);
    if (it != savedStates.end()) {
        return it->second;
    }
    return nullptr;
}

CityCaretaker::~CityCaretaker() {
    for (auto& pair : savedStates) {
        delete pair.second;
    }
}