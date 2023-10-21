/*
 DS
    1. Linked List
    2. Stacks
    3. Queue
    4. Hashmap
    5. Tree
        Binary Search Tree
        Red-Black trees
        B-Trees
    6. Heaps
 */
#include <iostream>
#include "ds/linkedlist.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Node n1(nullptr,nullptr,1);
    SinglyLinkedList s1(&n1);
    Node n2(nullptr,nullptr,2);
    s1.insert(&n2);
    return 0;
}

