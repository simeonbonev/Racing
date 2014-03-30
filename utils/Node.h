//
//  Node.h
//  TestMonday
//
//  Created by 101 Dalmatians on 3/30/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef __TestMonday__Node__
#define __TestMonday__Node__
#define CONTAINER_SIZE 10
#include <iostream>
class Node {
    int cellContainer[CONTAINER_SIZE];
    int currentIndex;
public:
    Node* previousNode;
    Node* nextNode;
    bool empty();
    bool full();
    bool push(const int& val);
    bool pop();
    int& getVal();
    void printNode();
    Node();
};
#endif /* defined(__TestMonday__Node__) */
