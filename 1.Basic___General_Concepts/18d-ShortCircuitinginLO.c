/*
Short-circuiting is a behavior exhibited by logical operators, such as && (logical AND) and || (logical OR), where the evaluation of the second 
operand is skipped under certain conditions.Short-circuiting is beneficial in cases where the evaluation of the second operand is expensive or 
has potential side effects. This behavior can improve performance and efficiency and optimize the execution of logical expressions by avoiding 
unnecessary evaluations.
In the case of the logical AND (&&), short-circuiting occurs when the first operand evaluates to false. Since the result of the entire expression 
will be false regardless of the second operand, the second operand is not evaluated, saving computational resources. For example
let result = false && someFunction();  // someFunction() is not called
In this case, someFunction() is not called because the first operand false guarantees that the overall result will be false, regardless of the 
second operand's value or side effects. 
*/
/*
#include <stdbool.h>
#include <stdio.h>

typedef enum{false,true} b;   //example 2
int main()
{
	int x = 10, y = 4;    
    //program below doesn’t print “GeeksQuiz” as the first operand of logical AND itself is false.   
    bool res = ((x == y) && printf("GeeksQuiz\n"));  //No Output
    //But the below program prints “GeeksQuiz” as the first operand of logical AND is true. 
    res = ((x != y) && printf("GeeksQuiz\n"));//GeeksQuiz  as output     
	return 0;//res is written instead of bool res in 2nd perogram line to ignore redefinition error
    
    // example 2 typedef 
    b z=false; // variable initialization  
    if(z==true) // conditional statements    
       printf("The value of x is true");   
    else   
       printf("The value of x is false");  
    return 0;  
} 

In the given code, there are a few errors and issues that need to be addressed. Here's an explanation of the errors and how to fix them:

1. Error: `typedef enum{false,true} b;` - This line attempts to define a custom boolean type `b` using an enum, but it results in a 
   redefinition error because `false` and `true` are already defined in the `stdbool.h` header.

   Fix: Instead of defining a custom boolean type, you can directly use the `bool` type from `stdbool.h` header. Remove the `typedef` 
   line and use `bool` for boolean variables.

2. Error: `bool res = ((x == y) && printf("GeeksQuiz\n"));` - This line uses a logical AND operator (`&&`) to evaluate whether `x` is 
   equal to `y` and prints "GeeksQuiz". However, the usage of `printf` within the logical expression can lead to unexpected behavior.

   Issue: The order of evaluation of the operands in a logical expression is not guaranteed in C. The compiler may choose to evaluate 
   the second operand (`printf`) before the first operand (`x == y`), resulting in the undesired output.

   Fix: To ensure predictable behavior, it's better to separate the logical expression and the `printf` statement. For example:


   bool res = (x == y);
   if (res)
       printf("GeeksQuiz\n");


3. Error: `res = ((x != y) && printf("GeeksQuiz\n"));` - Similar to the previous line, this line suffers from the same issue of using 
   `printf` within the logical expression.

   Fix: Apply the same fix as mentioned above to separate the logical expression and the `printf` statement.

4. Error: `int x = 10, y = 4;` - This line declares two integer variables `x` and `y`, but they are not used in the code. It seems 
   unrelated to the rest of the program.

   Fix: Either remove the unused variables or use them in the program as intended.

Here's the modified code with the mentioned fixes:

*/
#include <stdbool.h>
#include <stdio.h>
#define true 1 // Define true as 1
#define false 0 // Define false as 0
int main() {
    int x = 10, y = 4;

    // Example 1
    bool res = (x == y);
    if (res)
        printf("GeeksQuiz\n");

    res = (x != y);
    if (res)
        printf("GeeksQuiz\n");

    // Example 2
    bool z = false;
    if (z == true)
        printf("The value of z is true\n");
    else
        printf("The value of z is false\n");

    return 0;
}
//With these fixes, the code should compile and execute correctly without any errors. 