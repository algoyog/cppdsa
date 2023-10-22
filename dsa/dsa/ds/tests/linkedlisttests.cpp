//
//  linkedlisttests.cpp
//  dsa
//
//  Created by Aravind B on 22/10/23.
//

#include "linkedlisttests.hpp"
#include <iostream>
#include "linkedlist.hpp"

using namespace std;

void testlinkedlist(){
    cout<<"Testing linked list";
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
    cout<<"Deleteing...";
    s1.deleteNode(51);
    s1.print();
}
