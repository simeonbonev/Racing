//
//  Wheel.h
//  TestMonday
//
//  Created by 101 Dalmatians on 3/23/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef __TestMonday__Wheel__
#define __TestMonday__Wheel__

#include <iostream>
using namespace std;

class Wheel {
    int size;//cannot be accessed from outside
    string model;
    static int n;
public:
    Wheel();
    Wheel(int);
    Wheel(string, int);
    void printWheel();
    int getSize()const;
    string getModel()const;
    static int getN();
friend bool operator< (const Wheel&, const Wheel&);
    Wheel& operator= (const Wheel&);
    friend ostream& operator<< (ostream&, const Wheel&);
    ~Wheel();
};

#endif /* defined(__TestMonday__Wheel__) */
