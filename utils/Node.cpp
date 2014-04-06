//
//  Node.cpp
//  TestMonday
//
//  Created by 101 Dalmatians on 3/30/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#include <iostream>
#include "Node.h"
using namespace std;

Node::Node() {
    previousNode = 0;
    nextNode = 0;
    currentIndex = -1;
}

bool Node::empty() {
    return (currentIndex==-1) ? true : false;
}

bool Node::full() {
    return (currentIndex>=CONTAINER_SIZE) ? true : false;
}

bool Node::push(const int& val){
    if (this->full())
        return false;
    else {
        cellContainer[++currentIndex] = val;
        return true;
    }
}

bool Node::pop() {
    if(this->empty()) {
        return false;
    }
    else {
        currentIndex--;
        return true;
    }
}

int& Node:: getVal() {
    return cellContainer[currentIndex];
}

void Node::printNode() {
    for(int i = 0; i < CONTAINER_SIZE; i++) {
        cout << cellContainer[i]<<" ";
    }
    cout<<endl;
}