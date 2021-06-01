#include "LogicGateVisitor.h"
#include "And.h"
#include "Or.h"

void LogicGateVisitor::visit(And& gate)
{
	int i = gate.inputA->value;
	if (gate.inputA->value == 1 && gate.inputB->value == 1)
	{
		gate.output->value = 1;
	}
	else
	{
		gate.output->value = 0;
	}
}

void LogicGateVisitor::visit(Or& gate)
{
	if (gate.inputA->value == 1 || gate.inputB->value == 1)
	{
		gate.output->value = 1;
	}
	else
	{
		gate.output->value = 0;
	}
}
