/*
 * Or.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: root
 */

#include "../Or/Or.h"

Or::Or() {
	// TODO Auto-generated constructor stub

}

Or::~Or() {
	// TODO Auto-generated destructor stub
}

bool Or::calculate(bool input0, bool input1){

	if (input0 || input1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
