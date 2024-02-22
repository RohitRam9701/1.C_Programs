/*
The `goto` statement in C allows for unconditional branching in the program, altering the normal flow of execution. It's not 
typically essential in a structured language like C, but there can be instances where its use is beneficial.

The `goto` statement operates with a label, which is any valid variable name followed by a colon. This label is placed 
immediately before the statement to which control should be transferred. When a `goto` statement is encountered during 
program execution, control unconditionally jumps to the statement following the specified label.

    goto label;-------|                                label:  <---------|
    -------           |                                statement;        |
    -------           |                                -------           |
    -------           |                                -------           |        
    label:  <---------|                                -------           |
    statement;                                         goto label;-------|

   Forward jump                                        Backward jump

During running of a program when a statement like     
                                        goto begin;
is met the flow of control will jump to the statement immediately following the label begin.. This happens unconditionally.   

This jump disrupts the normal sequential execution of the program. If the label is positioned before the `goto` statement, 
a loop is formed and certain statements are executed repeatedly, resulting in a backward jump. Conversely, if the label is 
positioned after the `goto` statement, certain statements are skipped, resulting in a forward jump.

The `goto` statement is often used at the end of a program to direct control back to an input statement for further data reading. The 
provided example program demonstrates this usage:

main()
{
double x, y;
read:
scanf("%f", &x);

if (x<0) goto read;

y = sqrt(x);

printf("%f %f\n",x,y);
goto read;
}

The program reads a series of numbers from the terminal, calculates the square root of each number (provided it's non-negative), 
and prints the result. If a number is negative, the program skips the calculation and reads the next number. An unconditional `goto` 
statement at the end of the program ensures control is always transferred back to the input statement, creating an infinite loop. The 
program will continue to execute indefinitely until specific steps are taken to terminate the loop. It's generally recommended to avoid 
such infinite loops.

Note:Go to statements should be avoided as far as possible.Use of Goto makes the program unstructured.
*/
//Elimination of infinite loops
/*Program illustrates the use of the Goto statement. The program evaluates the square root for five numbers. The variable count keeps 
the count of numbers read. When count is less than or equal to 5 goto read; directs the control to the label read; Otherwise, the 
program prints a message and stops.*/

#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    int count;
    count = 1;
    printf("Enter five real values in a line \n");
  read:
    scanf("%lf", &x);
    printf("\n");
    if (x < 0) 
        printf("Value - %d is negative\n", count);
    else
    {
       y = sqrt(x);
       printf("%lf\t%lf\n", x, y);
    }
    count=count+1;
    if (count <= 5)
goto read;
    printf("End of computation. \n");
}    

/*
The image contains information about the use of the "goto" statement in programming. Here's the information from the image:

1. **Use of goto statement**: The "goto" statement is used to transfer control out of a loop (or nested loops) when certain peculiar conditions 
     are encountered. Here's an example:
   -----
   -----
   while (-----)
   {
       for (-----)
       {
           -----
           -----
           if (-----) goto end_of_program;  ____
           -----                               |      
       }                                       |
   -----                                       |  jumping out of loops
   -----                                       |
   }                 <_________________________|
   end_of_program:
   -----
   2. **Advice on using goto**: We should try to avoid using "goto" as far as possible. But there is nothing wrong if we use it to enhance the 
        readability of the program or to improve the execution speed.

Note: "goto" is generally discouraged in modern programming as it can make the code harder to understand and maintain. It's often better to use 
       structured control flow constructs like "if", "for", "while", and "switch" instead. However, "goto" can still be useful in certain 
       situations, such as breaking out of deeply nested loops or for error handling in C. 
*/   

