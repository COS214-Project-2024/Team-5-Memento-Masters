#ifndef CITY_CARETAKER_H
#define CITY_CARETAKER_H

#include <map>
#include "CityMemento.h"

/**
 * @class CityCaretaker
 * @brief Class for managing the saved states (mementos) of the City class.
 */
class CityCaretaker {
private:
    std::map<int, CityMemento*> savedStates; ///< Map of saved states indexed by year

public:
    /**
     * @brief Adds a memento to the saved states.
     * @param year The year associated with the memento.
     * @param memento Pointer to the CityMemento object.
     */
    void addMemento(int year, CityMemento* memento);

    /**
     * @brief Gets a memento for a specific year.
     * @param year The year associated with the memento.
     * @return Pointer to the CityMemento object.
     */
    CityMemento* getMemento(int year);

    /**
     * @brief Destructor for CityCaretaker.
     * Cleans up all allocated mementos.
     */
    ~CityCaretaker();
};

#endif // CITY_CARETAKER_H