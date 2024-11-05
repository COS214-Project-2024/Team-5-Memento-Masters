
using namespace std;

#ifndef PWOUT_H
#define PWOUT_H

#include "UtilState.h"

/**
 * @class PWOut
 * @brief A class representing the state of the power plant when it is out of power
 */
class PWOut: public UtilState
{

	public: 
	/**
	 * @brief Constructor
	 */
	void operate();
};

#endif
