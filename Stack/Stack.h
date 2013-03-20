//
//  Stack.h
//  Stack
//
//  Created by Isaac Brown on 3/19/13.
//  Copyright (c) 2013 Isaac Brown. All rights reserved.
//

#ifndef Stack_Stack_h
#define Stack_Stack_h

template <class T>
class DStack
{    
public:
    DStack(T size=20);
    void push(T val);
    T num_items() const;
    T pop();
    T full() const;
    T empty() const;
    void print() const;
    ~DStack();
    
private:
    T *bottom_;
    T *top_;
    int size_;
};

#include "Stack.implementation"

#endif
