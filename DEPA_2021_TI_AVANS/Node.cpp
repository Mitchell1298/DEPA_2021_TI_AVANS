#include "Node.h"

Node::Node()
{
	this->inputA = new NodeLink();
	this->inputB = new NodeLink();
	this->output = new NodeLink();
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
