using namespace std;

#ifndef CONSTRUCTION_H
#define CONSTRUCTION_H

#include "UtilState.h"

/**
 * @class Contruction
 * @brief Defines a construction state
 * 
 * This class is a concrete state of the State design pattern.
 */
class Contruction: public UtilState
{
	
	public: 
	/**
	 * @brief Constructor
	 */
	void operate();
};

#endif //CONSTRUCTION_H
