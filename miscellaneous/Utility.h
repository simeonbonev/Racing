//
//  Utility.h
//  TestMonday
//
//  Created by 101 Dalmatians on 4/14/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef TestMonday_Utility_h
#define TestMonday_Utility_h

class Utility {
public:
    template <class SomeType>
    static SomeType sum (SomeType a, SomeType b)
    {
        return a+b;
    }
    
    template <class T, int N>
    static T fixed_multiply (T val)
    {
        return val * N;
    }

};

#endif
