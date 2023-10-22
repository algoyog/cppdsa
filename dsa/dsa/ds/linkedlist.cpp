//
//  linkedlist.cpp
//  dsa
//
//  Created by Aravind B on 19/10/23.
//

#include "linkedlist.hpp"
#include <iostream>
using namespace std;


/*
 Definition of a Node.
 */
Node ::  Node(int inval){
    next = nullptr;
    prev = nullptr;
    val = inval;
    cout<< "Node Constructor\n";
}

void Node :: print(){
    cout<< "Printing from Node instance\n";
}

/*
 Definitions for Singly Linked List
 */

SinglyLinkedList :: SinglyLinkedList(Node* first){
    start = first;
    cout<< "Created a Singly Linked List";
}

/*
 bool deleteNode(int nodeNo);
 Node* searchForVal(int val); //TODO: Needs upgrade to generics
 //TODO: Define an iterator with fn to return the iterator
 void print();
};
 */
Node* SinglyLinkedList :: insert(Node* input){
    Node** head_ref = &start;
    Node* last = *head_ref;
    while (last->next != NULL) {
            last = last->next;
        }
    last->next = input;
    return input;
}
