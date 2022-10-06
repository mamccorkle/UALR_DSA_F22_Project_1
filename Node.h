// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380-01 and 9S1: Algorithms
// Fall 2022
// Project 1: Doubly Linked List
// Due Date: October 6, 2022, Thursday
// Name: Mark McCorkle
// T-number (Last 4 Digits): 4926

// Description of the Program (2-3 sentences):
//  The Node class header sets up the class declarations that are later defined
//  in the Node.cpp file. Here, the Node will have 3 private members. The first
//  being a Node pointer to the previous Node in the doubly Linked List. Next,
//  is the value stored in the Node, and integer value. Lastly, we store a
//  Node pointer to the next Node in the doubly linked list.

// Date Written: 20220924
// Date Revised: 20221005

// Based on Code Provided by Dr. Chia-Chu Chiang
#ifndef UALR___DSA___F22___PROJECT_1_NODE_H
#define UALR___DSA___F22___PROJECT_1_NODE_H

    #include <iostream>

    class Node
    {
        friend class DoublyLinkedList;

    public:
        Node();                     // Default Constructor
        explicit Node(int v);       // Conversion Constructor
        ~Node();                    // Destructor

    private:
        Node* prev{ nullptr };
        int  value{ 0 };
        Node* next{ nullptr };

    };

#endif //UALR___DSA___F22___PROJECT_1_NODE_H
