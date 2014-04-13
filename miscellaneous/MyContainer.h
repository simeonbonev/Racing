//
//  MyContainer.h
//  TestMonday
//
//  Created by 101 Dalmatians on 4/14/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef TestMonday_MyContainer_h
#define TestMonday_MyContainer_h

// template specialization
#include <iostream>
using namespace std;

// class template:
template <class T>
class mycontainer {
    T element;
public:
    mycontainer (T arg) {element=arg;}
    T getElement() {return element;}
    T increase () {return ++element;}
};

// class template specialization:
template <>
class mycontainer <char> {
    char element;
public:
    mycontainer (char arg) {element=arg;}
    char uppercase ()
    {
        if ((element>='a')&&(element<='z'))
            element+='A'-'a';
        return element;
    }
};

#endif
