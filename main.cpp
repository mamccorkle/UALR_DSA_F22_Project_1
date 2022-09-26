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
//
// IDE: CLion 2021.2.3     - UNVERIFIED
// IDE: XCode              - UNVERIFIED
// IDE: Visual Studio 2022 - UNVERIFIED
// IDE: Linux via g++      - UNVERIFIED
//
#include <iostream>

#include "DoublyLinkedList.h"

int main()
{
    // Test Case 1:
    {
        // Create a doubly linked list
        DoublyLinkedList Dll_1;

        // Each node contains only one integer of a string
        Node n11(10);
        Node n12(20);
        Node n13(30);
        Node n14(40);
        Node n15(50);

        std::cout << "&n11: " << &n11 << '\n';
        std::cout << "&n12: " << &n12 << '\n';
        std::cout << "&n13: " << &n13 << '\n';
        std::cout << "&n14: " << &n14 << '\n';
        std::cout << "&n15: " << &n15 << '\n';

        // a doubly linked list of integers by inserting nodes
        Dll_1.addNewNodeToFront(&n11);
        Dll_1.addNewNodeToBack (&n12);
        Dll_1.addNewNodeToFront(&n13);
        Dll_1.addNewNodeToBack (&n14);
        Dll_1.addNewNodeToFront(&n15);

        Dll_1.drawDoublyLinkedList();

        std::cout << '\n';
    }

    return 0;
}