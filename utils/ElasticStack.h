//
//  ElasticStack.h
//  TestMonday
//
//  Created by 101 Dalmatians on 3/30/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef __TestMonday__ElasticStack__
#define __TestMonday__ElasticStack__
#include "Node.h"
#include <iostream>

class ElasticStack {
    Node* init;
    Node* current;
public:
    ElasticStack();
    bool empty() const;
    int& top();
    void pop();
    void push(const int& val);
};

#endif /* defined(__TestMonday__ElasticStack__) */
