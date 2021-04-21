// DEPA_2021_TI_AVANS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"

int main()
{
    std::cout << "Hello World!\n";
    //Initialize
    Node* nodeAnd = new Node();
    Node * nodeAnd2 = new Node();
    
    nodeAnd->inputA->value = 1;
    nodeAnd->inputB->value = 1;
    nodeAnd->output = nodeAnd2->inputA;
    nodeAnd2->inputB->value = 1;
    nodeAnd->Operation();
    nodeAnd2->Operation();
    std::cout << "AND2 output = " << nodeAnd2->output->value << std::endl;
}

//Circuit:
//  A-+---+  C
//    | &1|--+
//  B-+---+  | A
//           +--+---+
//              | &2|--C
//          B---+---+


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
