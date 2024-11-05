#ifndef UTILSTATE_H
#define UTILSTATE_H

/**
 * @class UtilState
 * @brief An interface for the state of a utility building
 */
class UtilState {
    /**
     * @brief Operates the utility building
     */
    virtual void operate() = 0;
};

#endif