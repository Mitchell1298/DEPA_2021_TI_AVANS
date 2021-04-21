#include "Node.h"

Node::Node()
{
}

void Node::Operation()
{
	if (inputA->value == 1 && inputB->value == 1)
	{
		output->value = 1;
	}
	else
	{
		output->value = 0;
	}
}
