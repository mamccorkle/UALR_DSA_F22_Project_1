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
#include <iomanip>

#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{ }

DoublyLinkedList::~DoublyLinkedList()
{ }

void DoublyLinkedList::addNewNodeToFront(Node* newNode)
{
    if(head == nullptr && tail == nullptr)
    {
        head = tail = newNode;
    } else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void DoublyLinkedList::addNewNodeToBack(Node* newNode)
{
    if(head == nullptr && tail == nullptr)
    {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

Node* DoublyLinkedList::removeNodeFromFront()
{
    return nullptr;
}

void DoublyLinkedList::displayDoublyLinkedList()
{
    Node* tempNode;
    tempNode = head;
    while (tempNode != nullptr)
    {
        std::cout << tempNode->value << " ";
        tempNode = tempNode->next;
    }
}

//----------------------------------------------------------------------------/*
/*
    Function Name:              drawDoublyLinkedList()
    Function Purpose:           Test Case 1 acts as an iterator as we loop
                                through each element in the doubly linked list.
                                As we loop through each element, we print out
                                the memory address of the node, the previous
                                nodes' memory address, the value stored in the
                                node, and the memory address to the next node
                                in the linked list. The console output has been
                                formatted to properly display the null pointers
                                with a width of 14 characters using the iomanip
                                library.
    Function Parameters:        NA
    Function Return Value:      Void
*/
//----------------------------------------------------------------------------*/
void DoublyLinkedList::drawDoublyLinkedList()
{
    // Set up a temporary node to handle the doubly linked list traversing:
    Node* tempNode;

    // Set the tempNode to the beginning of the doubly linked list (head):
    tempNode = head;

    // Loop through the doubly linked list till we reach the end (nullptr):
    while( tempNode != nullptr )
    {
        std::cout << "[address: " << tempNode
                  << ", prev: " << std::setw(14) << std::left << tempNode->prev
                  << ", value: " << tempNode->value
                  << ", next: " << std::setw(14) << std::left << tempNode->next
                  << "]\n";
        tempNode = tempNode->next;
    }
}

bool DoublyLinkedList::isPalindrome()
{
    // CODE TO BE ADDED for Project 1
    return true;
}

void DoublyLinkedList::split(int n) // n is the number of even partitions
{
    // CODE TO BE ADDED for Project 1
    //...
}

void DoublyLinkedList::removeNodeFromBack()
{

}
