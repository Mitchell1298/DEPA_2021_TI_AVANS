#include "And.h"
#include "Visitor.h"

//void And::Operation()
//{
//	if (inputA->value == 1 && inputB->value == 1)
//	{
//		output->value = 1;
//	}
//	else
//	{
//		output->value = 0;
//	}
//}

void And::accept(Visitor& visitor)
{
	visitor.visit(*this);
}