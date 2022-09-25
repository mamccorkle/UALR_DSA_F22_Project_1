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
{ }

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

void DoublyLinkedList::drawDoublyLinkedList()
{
    // CODE TO BE ADDED for Project 1
    // Might reuse displayDoublyLinkedList()
}

bool DoublyLinkedList::isPalindrome()
{
    // CODE TO BE ADDED for Project 1
    //...
}

void DoublyLinkedList::split(int n) // n is the number of even partitions
{
    // CODE TO BE ADDED for Project 1
    //...
}

void DoublyLinkedList::removeNodeFromBack()
{

}
