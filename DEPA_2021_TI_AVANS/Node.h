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
	void Operation();
private:
	/*NodeLink* inputA;
	NodeLink* inputB;
	NodeLink* output;*/
};





