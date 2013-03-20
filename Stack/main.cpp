//
//  main.cpp
//  Stack
//
//  Created by Isaac Brown on 3/19/13.
//  Copyright (c) 2013 Isaac Brown. All rights reserved.
//

#include <iostream>
#include "Stack.h"
#include "WFF.h"

int main(int argc, const char * argv[])
{

    DStack<int> stack;
    
    stack.push(5);
    stack.print();
    cout << "woot";
    
    return 0;
}

