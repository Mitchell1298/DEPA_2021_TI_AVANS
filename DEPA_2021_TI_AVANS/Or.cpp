#include "Or.h"

void Or::Operation()
{
	if (inputA->value == 1 || inputB->value == 1)
	{
		output->value = 1;
	}
	else
	{
		output->value = 0;
	}
}
