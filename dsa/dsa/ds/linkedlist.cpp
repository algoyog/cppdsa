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
};
 */
Node* SinglyLinkedList :: insert(Node* input){
    Node** head_ref = &start; //TODO: Explore more on double pointer.
    Node* last = *head_ref;
    while (last->next != NULL) {
            last = last->next;
        }
    last->next = input;
    return input;
}

void SinglyLinkedList::print(){
    Node** head_ref = &start;
    Node* last = *head_ref;
    cout<<"\n";
    while (last!=nullptr) {
        cout<<last->val<<"  ";
        last = last -> next;
    }
    cout<<"\n";
}

//TODO: garbage collect the deleted object
bool SinglyLinkedList :: deleteNode(int nodeNo){
    if(nodeNo<1){
        cout<<"Incorrect position";
    }else if(nodeNo == 1){
        start = start->next;
    }else{
        int i= 1;
        Node** head_ref = &start;
        Node* curr = *head_ref;
        while(true){
            if(nodeNo == i+1){
                curr->next = (curr->next)->next;
                break;
            }else{
                i++;
                if(curr == nullptr){
                    cout<<"Incorrect input";
                    break;
                }
                curr = curr -> next;
                
            }
        }
        
    }
    return true;
}

