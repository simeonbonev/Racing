//
//  ElasticStack.cpp
//  TestMonday
//
//  Created by 101 Dalmatians on 3/30/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#include "ElasticStack.h"

ElasticStack::ElasticStack() {
    init = new Node();
    current = init;
}

bool ElasticStack::empty() const{
    if((current->empty()) && (current->previousNode == 0))
        return true;
    return false;
}

int& ElasticStack::top() {
    return current->getVal();
}

void ElasticStack::pop() {
    if(!this->empty()) {
        if (current->empty()) {
            Node* temp = current;
            current = current->previousNode;
            delete temp;
            current->pop();
        } else {
            current->pop();
        }
    }
}

void ElasticStack::push(const int& val) {
    if(current->full()) {
        Node* temp = new Node();
        temp->previousNode = current;
        current->nextNode = temp;
        current = temp;
    }
    current->push(val);
}