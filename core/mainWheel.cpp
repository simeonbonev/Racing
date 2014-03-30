//
//  main.cpp
//  TestMonday
//
//  Created by 101 Dalmatians on 3/23/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#include <iostream>
#include "Wheel.h"
int main(int argc, const char * argv[])
{

    Wheel one(22);
    Wheel* twoPtr = new Wheel(19);
    Wheel two = *twoPtr;
    Wheel defaultWheel = Wheel();
    std::cout << "Hello, World!\n";
    one.printWheel();
    twoPtr->printWheel();
    two.printWheel();
    defaultWheel.printWheel();
    
    cout<<boolalpha<<(two<one)<<endl;
    cout<<(one<two)<<endl;
    
    one = two;
    cout<<one.getSize()<<two.getSize()<<endl;
    
    Wheel dummyWheel;
    cout<<dummyWheel.getN()<<endl;
    std::cout<<two;
    return 0;
}

