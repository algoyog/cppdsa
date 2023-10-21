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
Node ::  Node(Node* inprev, Node* innext, int inval){
    next = innext;
    prev = inprev;
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
    Node* curr = start;
    while((*curr).next!=NULL){
        *curr = *(curr)->next;
    }
    (*curr).next = input;
    return input;
}
