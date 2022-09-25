// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380-01 and 9S1: Algorithms
// Fall 2022
// Project 1: Doubly Linked List
// Due Date: October 6, 2022, Thursday
// Name: Mark McCorkle
// T-number (Last 4 Digits): 4926
// Description of the Program (2-3 sentences):
// Date Written: 20220924
// Date Revised: 20220924
// Based on Code Provided by Dr. Chia-Chu Chiang
#ifndef UALR___DSA___F22___PROJECT_1_DOUBLYLINKEDLIST_H
#define UALR___DSA___F22___PROJECT_1_DOUBLYLINKEDLIST_H

    #include <iostream>
    #include "Node.h"

    class DoublyLinkedList
    {
    public:
        DoublyLinkedList();     // Default Constructor
        ~DoublyLinkedList();    // Destructor

        void addNewNodeToFront(Node* newNode);
        void addNewNodeToBack(Node* newNode);
        Node* removeNodeFromFront();
        void removeNodeFromBack();
        void displayDoublyLinkedList();
        bool isPalindrome();
        void split(int n);
        void drawDoublyLinkedList();

    private:
        Node* head{ nullptr };
        Node* tail{ nullptr };

    };

#endif //UALR___DSA___F22___PROJECT_1_DOUBLYLINKEDLIST_H
