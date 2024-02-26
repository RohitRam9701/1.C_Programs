/*The `continue` statement in a loop skips the current iteration (i.e. the rest of the statements in the loop after the continue statement are 
  ignored) when a certain condition is met and immediately proceeds to the next one (i.e. the control of execution goes to beginning of the loop). 
  Unlike the `break` statement which completely terminates the loop as soon as a certain condition is met, regardless of the iteration count.*/

/* To display the sum of entered even nos.,on only entering 5 even nos. using continue statement. */

#include<stdio.h>
int main ()
{
    /* Initialize three integer variables: n (the number to be entered by the user), c (the counter), and s (the sum of the numbers). */
    int n, c = 0,s = 0;

    /* Enter a while loop, which will continue to execute until 5 even numbers have been entered. */
    while(c < 5)
    {
        /* Prompt the user to enter a number. */
        printf("\nEnter number: ");
        scanf("%d",&n);

        /* If the number entered is odd (n%2 > 0), the continue statement is executed. */
        if (n%2 > 0)
        /* The continue statement causes the control of the program to jump to the next iteration of the while loop, skipping the rest of the code 
           inside the loop for the current iteration. This means that the odd number is not added to the sum (s), and the counter (c) is not 
           incremented. */
        continue; // if break; was used, the program would have terminated here even if the target of 5 even no. is completed or not

        /* If the number entered is even, the continue statement is not executed, and the program continues to the next lines of code within the 
           loop. The even number is added to the sum (s), and the counter (c) is incremented. */
        s += n;
        c += 1;
    }

    /* Once the counter (c) reaches 5, the while loop terminates and the program prints the sum of the 5 even numbers entered. */
    printf("\nSum of 5 even numbers entered: %d", s);  

    return 0;   
}
/*
	                                              break                                                       continue
Definition	     The break statement is used to terminate the loop or switch      The continue statement is used to skip the rest of the code inside 
                 statement and transfer execution to the statement immediately    the current iteration of the loop and immediately move on to the 
                 following the loop or switch.	                                  next iteration.

Effect on Loop	 It will immediately terminate the entire loop.	                  It will only skip the current iteration of the loop.

Usage	           It is used when we want to exit the loop entirely upon meeting   It is used when we want to skip the rest of the current loop 
                 a certain condition.	                                            iteration upon meeting a certain condition, but continue with 
                                                                                  the next iterations.

Control Flow	   Control immediately jumps to the first statement after the loop.	Control immediately jumps to the next iteration of the loop.
*/