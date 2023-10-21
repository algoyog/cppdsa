/*
 1. Ordered - Yes
 2.
 Variations - Single, Doubly, circular
 */

#ifndef linkedlist_hpp
#define linkedlist_hpp

#include <stdio.h>

//TODO: Needs upgrade to generics
class Node{
    public :
        Node* prev;
        Node* next;
        int val;
        Node(Node* prev, Node* next, int val);
        void print();
};

class SinglyLinkedList{
    private :
        Node* start;
    public :
        SinglyLinkedList(Node* first);
        Node* insert(Node* input);
        bool deleteNode(int nodeNo);
        Node* searchForVal(int val); //TODO: Needs upgrade to generics
        //TODO: Define an iterator with fn to return the iterator
        void print();
};

#endif /* linkedlist_hpp */
