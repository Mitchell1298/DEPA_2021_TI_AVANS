/*
 * Node.h
 *
 *  Created on: Apr 21, 2021
 *      Author: root
 */

#ifndef SRC_NODE_NODE_H_
#define SRC_NODE_NODE_H_

#include "../Nodes/And/And.h"
#include "../Nodes/Nand/Nand.h"
#include "../Nodes/Nor/Nor.h"
#include "../Nodes/Not/Not.h"
#include "../Nodes/Or/Or.h"
#include "../Nodes/Xor/Xor.h"

class Node {
public:
	Node();
	virtual ~Node();

	int ID;

	;NodeType;

	bool input0;
	bool input1;

	bool output;

	void calculate();
};

#endif /* SRC_NODE_NODE_H_ */
