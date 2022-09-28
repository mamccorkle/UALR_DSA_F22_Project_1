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
    Node* tempNode{ nullptr };;

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

//----------------------------------------------------------------------------/*
/*
    Function Name:              isPalindrome()
    Function Purpose:           In this function we first designate two
                                temporary node to represent the head and tail.
                                Then, we verify the set is not empty. Which,
                                would be considered a palindrome. Subsequently,
                                we compare the values from the temporary head
                                and tail for equality. If they are the same, we
                                proceed by moving the head forward and the tail
                                backward until all elements have been compared.
                                If the loop completes with all values being
                                equal, the resulting set is a palindrome.
    Function Parameters:        NA
    Function Return Value:      bool (true = Palindrome)
*/
//----------------------------------------------------------------------------*/
bool DoublyLinkedList::isPalindrome()
{
    // Set up a temporary node (both head and tail) for traversing the doubly
    // linked list:
    Node* tempHead{ head };
    Node* tempTail{ tail };

    // An empty doubly linked list of integers is a palindrome:
    if( tempHead == nullptr && tempTail == nullptr )
        return true;
    // Compare the first set of values. Then, loop through the DLL comparing
    // each node's values. Each iteration will move toward the center of the DLL
    // comparing values along the way. However, based on the Project
    // specifications, we are not allowed to use any "reverse" method. I am not
    // sure if this counts as a reverse method as we are working backwards from
    // the tail on the rvalue during comparisons:
    else
    {
        //std::cout << '\n';
        // Keep looping while we are not at the end of the DLL, designated by
        // have a nullptr for the tempHead and tempTail:
        while(tempHead != nullptr && tempTail != nullptr)
        {
            // Compare the values. If they are the same, move the tempHead
            // forward and the tempTail backwards:
            if (tempHead->value == tempTail->value)
            {
                tempHead = tempHead->next;
                tempTail = tempTail->prev;
            }
            // The values are not the same and therefore leads to the conclusion
            // this is in fact not a palindrome:
            else
                return false;
        }

        // If we have reached this point a palindrome exists:
        return true;
    }
}

void DoublyLinkedList::split(int n) // n is the number of even partitions
{
    // CODE TO BE ADDED for Project 1
    //...
}

void DoublyLinkedList::removeNodeFromBack()
{

}
