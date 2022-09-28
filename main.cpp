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
    // Question 1:
    {
        //// Create a doubly linked list
        //DoublyLinkedList Dll_1;

        //// Each node contains only one integer of a string
        //Node n11(10);
        //Node n12(20);
        //Node n13(30);
        //Node n14(40);
        //Node n15(50);

        //std::cout << "&n11: " << &n11 << '\n';
        //std::cout << "&n12: " << &n12 << '\n';
        //std::cout << "&n13: " << &n13 << '\n';
        //std::cout << "&n14: " << &n14 << '\n';
        //std::cout << "&n15: " << &n15 << '\n';

        //// a doubly linked list of integers by inserting nodes
        //Dll_1.addNewNodeToFront(&n11);
        //Dll_1.addNewNodeToBack (&n12);
        //Dll_1.addNewNodeToFront(&n13);
        //Dll_1.addNewNodeToBack (&n14);
        //Dll_1.addNewNodeToFront(&n15);

        //Dll_1.drawDoublyLinkedList();

        //std::cout << '\n';
    }

    // Question 2:
    {
        // Test case 1 (Nonpalindrome):

        // Create a doubly linked list
        DoublyLinkedList Dll_1;

        // Each node contains only one integer of a string
        Node n11(10);
        Node n12(20);
        Node n13(30);
        Node n14(40);
        Node n15(50);

        // a doubly linked list of integers by inserting nodes
        Dll_1.addNewNodeToFront(&n11);
        Dll_1.addNewNodeToFront(&n12);
        Dll_1.addNewNodeToFront(&n13);
        Dll_1.addNewNodeToFront(&n14);
        Dll_1.addNewNodeToFront(&n15);

        std::cout << "\nThe set [ ";
        Dll_1.displayDoublyLinkedList();
        std::cout << "] is a palindrome: ";
        std::cout << std::boolalpha << Dll_1.isPalindrome() << std::endl;

        // Test case 2 (Palindrome):

        // Create a doubly linked list
        DoublyLinkedList Dll_2;

        // Each node contains only one integer of a string
        Node n21(10);
        Node n22(20);
        Node n23(20);
        Node n24(10);

        // a doubly linked list of integers by inserting nodes
        Dll_2.addNewNodeToFront(&n21);
        Dll_2.addNewNodeToFront(&n22);
        Dll_2.addNewNodeToFront(&n23);
        Dll_2.addNewNodeToFront(&n24);

        std::cout << "The set [ ";
        Dll_2.displayDoublyLinkedList();
        std::cout << "] is a palindrome: ";
        std::cout << std::boolalpha << Dll_2.isPalindrome() << std::endl;

        // Test Case 3 (Empty set):

        // Create the third doubly linked list:
        DoublyLinkedList Dll_3;

        std::cout << "The set [ ";
        Dll_3.displayDoublyLinkedList();
        std::cout << "] is a palindrome: ";
        std::cout << std::boolalpha << Dll_3.isPalindrome() << std::endl;

        // Test case 4 (Palindrome):

        // Create a doubly linked list
        DoublyLinkedList Dll_4;

        // Each node contains only one integer of a string
        Node n25(1);
        Node n26(2);
        Node n27(3);
        Node n28(3);
        Node n29(2);
        Node n30(1);

        // a doubly linked list of integers by inserting nodes
        Dll_4.addNewNodeToFront(&n25);
        Dll_4.addNewNodeToFront(&n26);
        Dll_4.addNewNodeToFront(&n27);
        Dll_4.addNewNodeToFront(&n28);
        Dll_4.addNewNodeToFront(&n29);
        Dll_4.addNewNodeToFront(&n30);

        std::cout << "The set [ ";
        Dll_4.displayDoublyLinkedList();
        std::cout << "] is a palindrome: ";
        std::cout << std::boolalpha << Dll_4.isPalindrome() << std::endl;

        // Test case 5 (NonPalindrome):

        // Create a doubly linked list
        DoublyLinkedList Dll_5;

        // Each node contains only one integer of a string
        Node n31(1);
        Node n32(2);
        Node n33(3);
        Node n34(9);
        Node n35(8);
        Node n36(3);
        Node n37(2);
        Node n38(1);

        // a doubly linked list of integers by inserting nodes
        Dll_5.addNewNodeToFront(&n31);
        Dll_5.addNewNodeToFront(&n32);
        Dll_5.addNewNodeToFront(&n33);
        Dll_5.addNewNodeToFront(&n34);
        Dll_5.addNewNodeToFront(&n35);
        Dll_5.addNewNodeToFront(&n36);
        Dll_5.addNewNodeToFront(&n37);
        Dll_5.addNewNodeToFront(&n38);

        std::cout << "The set [ ";
        Dll_5.displayDoublyLinkedList();
        std::cout << "] is a palindrome: ";
        std::cout << std::boolalpha << Dll_5.isPalindrome() << std::endl;
    }

    // Question 3:
    {
//        // Test case 1
//
//        // Create a doubly linked list
//        DoublyLinkedList* Dll_1;
//        Dll_1 = new DoublyLinkedList;
//
//        // Each node contains only one integer of a string
//        Node n11(1);
//        Node n12(2);
//        Node n13(3);
//        Node n14(4);
//        Node n15(5);
//        Node n16(6);
//
//        // A doubly linked list of integers by inserting nodes
//        Dll_1->addNewNodeToBack(&n11);
//        Dll_1->addNewNodeToBack(&n12);
//        Dll_1->addNewNodeToBack(&n13);
//        Dll_1->addNewNodeToBack(&n14);
//        Dll_1->addNewNodeToBack(&n15);
//        Dll_1->addNewNodeToBack(&n16);
//
//        Dll_1->split(3);
    }

    return 0;
}