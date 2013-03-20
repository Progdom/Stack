//
//  WFF.cpp
//  Stack
//
//  Created by Isaac Brown on 3/19/13.
//  Copyright (c) 2013 Isaac Brown. All rights reserved.
//

#include "WFF.h"
#include "Stack.h"
#include <string>
#include <ctype.h>

bool isLowerCase(char c)
{
    return islower(c);
}

bool isCapital(char c)
{
    return isupper(c);
}

bool isPairStart(char c)
{
    return c == '(';
}

bool isPairComma(char c)
{
    return c == ',';
}

bool isPairEnd(char c)
{
    return c == ')';
}