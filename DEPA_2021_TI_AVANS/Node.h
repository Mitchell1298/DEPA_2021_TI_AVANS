#pragma once
#include "NodeLink.h"

class Node
{
public:
	Node();
	//std::string pop();
	//std::string peek();
	//void push(std::string str);
	//bool isEmpty();
	//void showAll();
	NodeLink* inputA;
	NodeLink* inputB;
	NodeLink* output;
	virtual void Operation() = 0;
private:
	/*NodeLink* inputA;
	NodeLink* inputB;
	NodeLink* output;*/
};





