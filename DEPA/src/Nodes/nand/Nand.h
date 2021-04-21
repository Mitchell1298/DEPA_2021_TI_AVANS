/*
 * Nand.h
 *
 *  Created on: Apr 21, 2021
 *      Author: root
 */

#ifndef SRC_NODES_NAND_NAND_H_
#define SRC_NODES_NAND_NAND_H_

class Nand {
public:
	Nand();
	virtual ~Nand();

	bool calculate(bool, bool);
};

#endif /* SRC_NODES_NAND_NAND_H_ */
