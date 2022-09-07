// Copyright (c) IM_EMBEDDED_DEV. All rights reserved.
// Licensed under SPDX short identifier: LGPL-2.1.

#include "numeric.h"

/* This function return the result of the mathematical operation 
    The first arg : the first number to evaluate its type is double
    the second arg : the operator of the equation its type is char as defined below
    the third arg : the second number to evaluate its type is double
 */

double numeric::calculator (double in_1, char oper, double in_2)
{
    double x;
    switch (oper)
    {
    case '+':
       
        return(in_1 + in_2);
    case '-':
       
        return(in_1 - in_2);
    case '/':
       
        return(in_1 / in_2);
    case '*':
       
        return(in_1 * in_2);
    case '%':
        
        return((in_1 / in_2)*100);
    case '^':
        x=pow(in_1, in_2);
        return(x);
       
    
    default:
        return 0.0;
    }
}