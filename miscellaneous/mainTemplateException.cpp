//
//  main.cpp
//  TestMonday
//
//  Created by 101 Dalmatians on 3/23/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#include <iostream>
#include <vector>
#include "MyPair.h"
#include "YourPair.h"
#include "Tuple.h"
#include "MyContainer.h"
#include "Utility.h"
using namespace std;
int main(int argc, const char * argv[])
{
    mypair<int> myobject (115, 36);
    mypair<double> myfloats (3.0, 2.18);
    cout<<myobject.getKey()<<" ";
    cout<<myobject.getValue()<<endl;
    yourpair<long, string> * person = new yourpair<long,string>(80539, "Simeon Bonev");
    cout<<person->getKey()<<" "<<person->getValue()<<endl;

    cout <<endl;
    
    Tuple<int, int, int> tuple(1,2,3);
    cout<<tuple.getA()<<endl;
    cout<<tuple.getB()<<endl;
    cout<<tuple.getC()<<endl;

    Tuple<int, string, double> info(23, "Simeon", 0.5);
    cout<<info.getA()<<endl;
    cout<<info.getB()<<endl;
    cout<<info.getC()<<endl;

    mycontainer<int> myint (7);
    mycontainer<char> mychar ('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    Utility* ptr;
    cout<<ptr->sum(1,2)<<endl;
    cout<<ptr->sum(2.5,4.1)<<endl;
    cout<<ptr->sum(string("My car is "), string("red."))<<endl;
    
    cout << ptr->fixed_multiply<int,2>(10) << '\n';
    cout << ptr->fixed_multiply<int,3>(10) << '\n';
    
    mycontainer<int> b = myint;
    
    try {
        if(strcmp(typeid (b.getElement()).name(), "i")==0) {
            //throw 2;
        }
        
        //throw string("pesho");
        throw 3.5;
    } catch(int n) {
        cout << "Integer thrown: " << n << endl;
    } catch (char param) { cout << "char exception"; }
    catch (string param) { cout << "string" << param; }
    catch(...) {
        cout<<"Default handler";
    }
    return 0;
}

