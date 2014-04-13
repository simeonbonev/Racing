//
//  YourPair.h
//  TestMonday
//
//  Created by 101 Dalmatians on 4/13/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef TestMonday_YourPair_h
#define TestMonday_YourPair_h


template <typename T, typename U>
class yourpair {
    T key;
    U value;
public:
    
    yourpair() {
        
    }
    
    yourpair (T first, U second) {
        key = first;
        value = second;
    }
    
    T getKey() {
        return key;
    }
    
    U getValue() {
        return value;
    }
    
};
#endif
