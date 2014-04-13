//
//  MyPair.h
//  TestMonday
//
//  Created by 101 Dalmatians on 4/13/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef __TestMonday__MyPair__
#define __TestMonday__MyPair__

#include <iostream>

template <class T>
class mypair {
    T values [2];
public:
    mypair (T first, T second)
    {
        values[0]=first; values[1]=second;
    }
    
    T getKey() const {
        return values[0];
    }
    
    T getValue() const {
        return values[1];
    }
    
};


#endif /* defined(__TestMonday__MyPair__) */
