#include <exception>
using namespace std;

#ifndef WASTEOUT_H
#define WASTEOUT_H

#include "UtilState.h"

/**
 * @class WasteOut
 * @brief A class representing the state of the waste plant when it is out of waste
 */
class WasteOut: public UtilState
{

	public:
	/**
	 * @brief Constructor
	 */ 
	void operate();
};

#endif
