/*
Relational Operators or Comparison Operators(==,!=,>,<,<=,>=):

A.Equality testing: 1. Equal to (==): Checks if two operands are equal.
                    2. Not equal to (!=): Checks if two operands are not equal.
B.Order relations: 1. Greater than (>): Checks if the first operand is greater than the second operand.
                   2. Less than (<): Checks if the first operand is less than the second operand.
                   3. Greater than or equal to (>=): Checks if the first operand is greater than or equal to the second operand.
                   4. Less than or equal to (<=): Checks if the first operand is less than or equal to the second operand.

We can simplify an expression involving the not and the less than operators using the complements as shown below:
                 Actual one                                    Simplified one
                   !(x < y)                                        x >= y
                   !(x > y)                                        x <= y
                   !(x != y)                                       x == y
                   !(x <= y)                                       x > y
                   !(x >= y)                                       x < y
                   !(x == y)                                       x != y
				   
These comparison operators return a value of 1 (true) if the comparison is true, and a value of 0 (false) otherwise. They are commonly used in 
conditional statements such as if and while to make decisions based on the comparison results.

Note:Never use floating point operands with relational operators.
*/
// C program to demonstrate working of relational operators
#include <stdio.h>
int main()
{
	int a = 10, b = 4;
	// greater than example(>)
	if (a > b)
		printf("a is greater than b\n");
	else
		printf("a is less than or equal to b\n");
	// greater than equal to(>=)
	if (a >= b)
		printf("a is greater than or equal to b\n");
	else
		printf("a is lesser than b\n");
	// less than example
	if (a < b)
		printf("a is less than b\n");
	else
		printf("a is greater than or equal to b\n");
	// lesser than equal to
	if (a <= b)
		printf("a is lesser than or equal to b\n");
	else
		printf("a is greater than b\n");
	// equal to
	if (a == b)
		printf("a is equal to b\n");
	else
		printf("a and b are not equal\n");

	// not equal to
	if (a != b)
		printf("a is not equal to b\n");
	else
		printf("a is equal b\n");
		// Working of relational operators
    int x = 5, y = 5, z = 10;
    printf("%d == %d is %d \n", x, y, x == y);
    printf("%d == %d is %d \n", x, z, x == z);
    printf("%d > %d is %d \n", x, y, x > y);
    printf("%d > %d is %d \n", x, z, x > z);
    printf("%d < %d is %d \n", x, y, x < y);
    printf("%d < %d is %d \n", x, z, x < z);
    printf("%d != %d is %d \n", x, y, x != y);
    printf("%d != %d is %d \n", x, z, x != z);
    printf("%d >= %d is %d \n", x, y, x >= y);
    printf("%d >= %d is %d \n", x, z, x >= z);
    printf("%d <= %d is %d \n", x, y, x <= y);
    printf("%d <= %d is %d \n", x, z, x <= z);

/*Write a C program for the following expression: a=5<= 8 && 6!=5 */
    int a;
	a = 5 <= 8 && 6 != 5; 
	printf ("%d" , a); //output = 1

    return 0;
}
/*
It is an error if any space appears between the two symbols of the operators ==, !=, <= and >=.

It is an error if the two symbols of the operators !=, < and >= are reversed.

The result of a relational expression is either true or false.

SOME COMPUTATIONAL PROBLEMS:

When expressions include real values, then it is important to take necessary precautions to guard against certain computational errors. We know 
that the computer gives approximate values for real numbers and the errors due to such approximations may lead to serious problems. For example, 
consider the following statements:
a= 1.0/3.0 ;
b = a * 3.0;
We know that (1.0/3.0) 3.0 is equal to 1.But there is no guarantee that the value of b computed in a program will equal 1.
Another problem is division by zero. On most computers, any attempt to divide a number by zero will result in abnormal termination of the program.
In some cases such a division may produce meaningless results. Care should be taken to test the denominator that is likely to assume zero value and 
avoid any division by zero.
The third problem is to avoid overflow or underflow errors. It is our responsibility to guarantee that operands are of the correct type and range, 
and the result may not produce any overflow of underflow.
*/