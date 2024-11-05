
using namespace std;

#ifndef FUNCTIONAL_H
#define FUNCTIONAL_H

#include "UtilState.h"

/**
 * @class Functional
 * @brief Defines a functional state
 * 
 * This class is a concrete state of the State design pattern.
 */
class Functional: public UtilState
{

	public: 
	/**
	 * @brief Constructor
	 */
	void operate();
};

#endif //FUNCTIONAL_H
