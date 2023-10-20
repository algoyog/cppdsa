/*
 1. Ordered - Yes
 2.
 Variations - Single, Doubly, circular
 */

#ifndef linkedlist_hpp
#define linkedlist_hpp

#include <stdio.h>

//TODO node class need to take any val datatype.
class Node{
    private :
    Node* prev;
    Node* next;
    int val;
    public :
    Node(Node* prev, Node* next, int val);
    void print();
};

#endif /* linkedlist_hpp */
