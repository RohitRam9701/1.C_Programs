/*
Interesting Facts About Bitwise Operators
1. The left-shift and right-shift operators should not be used for negative numbers.
If the second operand(which decides the number of shifts) is a negative number, it results in undefined behavior in C. For example results of both 
1 <<- 1 and 1 >> -1 is undefined. Also, if the number is shifted more than the size of the integer, the behavior is undefined. For example, 1 << 33
is undefined if integers are stored using 32 bits. Another thing is NO shift operation is performed if the additive expression (operand that decides 
no of shifts) is 0. 
Note: In C++, this behavior is well-defined.

2. Interestingly!! The bitwise OR of two numbers is just the sum of those two numbers if there is no carry involved, otherwise, you just add their 
bitwise AND.
Let’s say, we have a=5(101) and b=2(010), since there is no carry involved, their sum is just a|b. Now, if we change ‘a’ to 6 which is 110 in binary 
,their sum would change to a|b + a&b since there is a carry involved. 

3. The bitwise XOR operator is the most useful operator from a technical interview perspective.
It is used in many problems. A simple example could be “Given a set of numbers where all elements occur an even number of times except one number, 
find the odd occurring number” This problem can be efficiently solved by just doing XOR to all numbers. 
*/
#include <stdio.h>
// Function to return the only odd
// occurring element
int findOdd(int arr[], int n)
{
	int res = 0, i;
	for (i = 0; i < n; i++)
		res ^= arr[i];
	return res;
}
// Driver Method
int main(void)
{
	int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("The odd occurring element is %d ",
		findOdd(arr, n));
	return 0;
}

