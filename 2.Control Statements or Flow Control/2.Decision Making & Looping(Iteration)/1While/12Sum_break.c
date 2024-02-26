/*When the break statement is encountered in a loop, the execution of the loop terminates and the control of execution goes to the statement just 
  after the loop structure. In short, the break statement is used to come out of a loop forcibly bypassing the normal loop condition test.*/

#include<stdio.h>
int main()
{
/* To display the sum of the entered nos. on entering zero(0) using break statement*/
  int n,s=0;
  while(1)                 // it is an infinite while loop i.e. a loop whose condition part is always True (due to value 1)
  {
    printf("\nEnter number:");
    scanf("%d",&n);
    if (n == 0)            // when input number is 0, the break statement gets executed taking the program control out of the loop to line 18, 
                           // thus skipping the rest of the loop and prints the total sum in line 18.
    break;
    s += n;
  }
  printf("\nSum of numbers:%d",s);

/* To find the sum of an arbitrary number of positive values input by the user*/
    /* Initialize three integer variables: c (the counter), num (the number to be entered by the user), and sum (the sum of the numbers). */
    int c = 0, num, sum = 0;

    /* Prompt the user to enter a number. */
    printf("\nEnter numbers to add. Enter a negative number to end list): ");

    /* Enter an infinite while loop, which will continue to execute until it is explicitly broken. */
    while(1)
    { 
        scanf("%d",&num);

        /* In a loop, a break statement causes immediate termination of the loop. Control resumes at the next statement following the loop. It 
           effectively “breaks” out of the loop when a certain condition is met, in this case, when a negative number is entered. */
        if (num < 0) 
        break;

        /* If the number entered is not negative, it is added to sum, and the counter c is incremented by 1. */
        sum += num;
        ++c; // or, c += 1;
    }

    /* Once the loop is terminated (either by the break statement or by other means), the program prints the sum of the numbers entered and the 
       count of numbers. */
    printf("\nSum of %d numbers is %d", c, sum);

    return 0;       
}