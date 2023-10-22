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
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    Node n1(1);
    SinglyLinkedList s1(&n1);
    Node n2(42);
    s1.insert(&n2);
    Node n3(3);
    s1.insert(&n3);
    Node n4(6);
    s1.insert(&n4);
    Node n5(99);
    s1.insert(&n5);
    Node n6(123);
    s1.insert(&n6);
    Node n7(3);
    s1.insert(&n7);
    s1.print();

    s1.deleteNode(5);
    s1.print();

    return 0;
}

