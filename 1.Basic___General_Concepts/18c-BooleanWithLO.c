/*
Boolean with Logical Operators

The Boolean type value is associated with logical operators. There are three types of logical operators in the C language:

&&(AND Operator): It is a logical operator that takes two operands. If the value of both the operands are true, then this operator returns true 
otherwise false

||(OR Operator): It is a logical operator that takes two operands. If the value of both the operands is false, then it returns false otherwise true.

!(NOT Operator): It is a NOT operator that takes one operand. If the value of the operand is false, then it returns true, and if the value of the 
operand is true, then it returns false.
*/

#include <stdio.h> 
#include<stdbool.h> 
//typedef enum { false, true } bool; //(User-defined bool type)--> instead of #include<stdbool.h>   or,
//typedef int bool; // Define bool as a type of int            --> instead of #include<stdbool.h>
//both the typedef combinations were working independently instead of stdbool.h but showing problem as invalid combination.So, only #include<stdbool.h> 
//is used here.
#define true 1 // Define true as 1
#define false 0 // Define false as 0
int main()  
{  
    bool x=false;  
    bool y=true;  
    printf("The value of x&&y is %d", x&&y);  
    printf("\nThe value of x||y is %d", x||y);  
    printf("\nThe value of !x is %d", !x);  
    return 0;
} 
