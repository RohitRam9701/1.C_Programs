/*
With the logical OR (||), short-circuiting occurs when the first operand evaluates to true. In this case, the second operand is not evaluated since
the overall result will be true. For example:
let result = true || someFunction();  // someFunction() is not called
Here, someFunction() is not called because the first operand true guarantees that the overall result will be true, regardless of the second 
operand's value or side effects.
*/
#include <stdio.h>
#include <stdbool.h> or//typedef enum {false, true} bool; this typedef enum bool has some error and cannot be fixed.
int main()
{
	int a = 10, b = 4;    
    //program below doesn’t print “GeeksQuiz” as the first operand of logical OR itself is true. 
    bool res = ((a != b) || printf("GeeksQuiz\n"));  //No Output
    //But the below program prints “GeeksQuiz” as the first operand of logical OR is false.
    res = ((a == b) || printf("GeeksQuiz\n"));//GeeksQuiz  as output     
	return 0;
}