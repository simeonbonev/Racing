//
//  main.cpp
//  TestMonday
//
//  Created by 101 Dalmatians on 3/23/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#include <iostream>
#include "Wheel.h"
#include "Node.h"
#include "ElasticStack.h"
#include "Dashboard.h"
int main(int argc, const char * argv[])
{
    /*
     pointer = new type
     pointer = new type [number_of_elements]
     
     The first expression is used to allocate memory to contain one single element of type type. The second one is used to allocate a block (an array) of elements of type type, where number_of_elements is an integer value representing the amount of these. For example:

     */
    int * foo;
    foo = new int [5]; // if allocation fails, an exception is thrown(bad_alloc exception)
    Dashboard* dashboard = new Dashboard;
    Dashboard* combo = new Dashboard[5];
    
    /*
     In this case, the system dynamically allocates space for five elements of type int and returns a pointer to the first element of the sequence, which is assigned to foo (a pointer). Therefore, foo now points to a valid block of memory with space for five elements of type int. The first element pointed to by foo can be accessed either with the expression foo[0] or the expression *foo (both are equivalent).
     There is a substantial difference between declaring a normal array and allocating dynamic memory for a block of memory using new. The most important difference is that the size of a regular array needs to be a constant expression, and thus its size has to be determined at the moment of designing the program, before it is run, whereas the dynamic memory allocation performed by new allows to assign memory during runtime using any variable value as size.
     
     The dynamic memory requested by our program is allocated by the system from the memory heap. However, computer memory is a limited resource, and it can be exhausted. Therefore, there are no guarantees that all requests to allocate memory using operator new are going to be granted by the system.
     */

    int * bar;
    bar = new (nothrow) int [5];
    if (bar == nullptr) {
        // error assigning memory. Take measures.
    }

    delete dashboard;
    delete[] combo;
    
    /*The first statement releases the memory of a single element allocated using new, and the second one releases the memory allocated for arrays of elements using new and a size in brackets ([]).
        
        The value passed as argument to delete shall be either a pointer to a memory block previously allocated with new, or a null pointer (in the case of a null pointer, delete produces no effect).
    */
    
    Dashboard board = *(new Dashboard());
    board.printDashboard().setGear(5).printDashboard();

    Dashboard baz;
    Dashboard qux (baz);       // object initialization: copy constructor called
    Dashboard quux = baz;       // object initialization: copy constructor called
    baz = qux;
    
    Dashboard copy = Dashboard(baz);
    
    /*
     A static member function does not have a this pointer.
     The type of the this pointer for a member function of a class type X, is X* const. If the member function is declared with the const qualifier, the type of the this pointer for that member function for class X, is const X* const.
     */
    
    return 0;
}

