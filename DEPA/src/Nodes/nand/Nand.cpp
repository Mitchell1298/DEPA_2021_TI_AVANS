/*
 * Nand.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: root
 */

#include "Nand.h"

Nand::Nand() {
	// TODO Auto-generated constructor stub

}

Nand::~Nand() {
	// TODO Auto-generated destructor stub
}

bool Nand::calculate(bool input0, bool input1){

	if (input0 && input1)
	{
		return false;
	}
	else
	{
		return true;
	}

}
