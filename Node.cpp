// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380-01 and 9S1: Algorithms
// Fall 2022
// Project 1: Doubly Linked List
// Due Date: October 6, 2022, Thursday
// Name: Mark McCorkle
// T-number (Last 4 Digits): 4926

// Description of the Program (2-3 sentences):
//  The Node.cpp file is used to construct and destruct the Node object.
//  A default constructor is provided as well as a conversion constructor
//  for normal usage throughout this program.

// Date Written: 20220924
// Date Revised: 20221005

// Based on Code Provided by Dr. Chia-Chu Chiang
#include "Node.h"

Node::Node()
{ }

Node::Node(int v): prev{ nullptr }, value{ v }, next{ nullptr }
{ }

Node::~Node()
{ }
