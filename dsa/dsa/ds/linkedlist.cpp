//
//  linkedlist.cpp
//  dsa
//
//  Created by Aravind B on 19/10/23.
//

#include "linkedlist.hpp"
#include <iostream>
using namespace std;

Node ::  Node(Node* prev, Node* next, int val){
    cout<< "Node Constructor\n";
}

void Node :: print(){
    cout<< "Printing from Node instance\n";
}
