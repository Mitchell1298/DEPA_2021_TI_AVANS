#pragma once
#include "Visitor.h"
#include "NodeLink.h"

class Node
{
public:
	Node();
	virtual        ~Node() = default;
	//std::string pop();
	//std::string peek();
	//void push(std::string str);
	//bool isEmpty();
	//void showAll();
	NodeLink* inputA;
	NodeLink* inputB;
	NodeLink* output;
	//virtual void Operation() = 0;

	//Visitor patterm stuff
	virtual void accept(Visitor&) = 0;

private:
	/*NodeLink* inputA;
	NodeLink* inputB;
	NodeLink* output;*/
};





