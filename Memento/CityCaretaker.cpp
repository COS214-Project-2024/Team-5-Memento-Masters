#include "CityCaretaker.h"

/**
 * @brief Adds a memento to the saved states.
 * @param year The year associated with the memento.
 * @param memento Pointer to the CityMemento object.
 */
void CityCaretaker::addMemento(int year, CityMemento* memento) {
    auto it = savedStates.find(year);
    if (it != savedStates.end()) {
        delete it->second; // Clean up existing memento for the year
    }
    savedStates[year] = memento;
}

/**
 * @brief Gets a memento for a specific year.
 * @param year The year associated with the memento.
 * @return Pointer to the CityMemento object.
 */
CityMemento* CityCaretaker::getMemento(int year) {
    auto it = savedStates.find(year);
    if (it != savedStates.end()) {
        return it->second;
    }
    return nullptr;
}

/**
 * @brief Destructor for CityCaretaker.
 * Cleans up all allocated mementos.
 */
CityCaretaker::~CityCaretaker() {
    for (auto& pair : savedStates) {
        delete pair.second;
    }
}