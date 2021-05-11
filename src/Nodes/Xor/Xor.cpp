/*
 * Xor.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: root
 */

#include "../Xor/Xor.h"

Xor::Xor() {
	// TODO Auto-generated constructor stub

}

Xor::~Xor() {
	// TODO Auto-generated destructor stub
}


bool Xor::calculate(bool input0, bool input1){

	if (input0&& input1 == false)
	{
		return true;
	}

	else if (input0 == false && input1)
	{
		return true;
	}

	else
	{
		return false;
	}
}
