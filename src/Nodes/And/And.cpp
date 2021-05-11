/*
 * And.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: root
 */

#include "../And/And.h"

And::And() {
	// TODO Auto-generated constructor stub

}

And::~And() {
	// TODO Auto-generated destructor stub
}

bool And::calculate(bool input0, bool input1){

	if (input0 && input1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
