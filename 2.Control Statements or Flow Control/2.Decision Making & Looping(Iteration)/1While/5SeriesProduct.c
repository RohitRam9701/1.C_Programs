#include<stdio.h>
int main() 
{
/*1. C program to calculate the factorial of a number using a while loop*/

    int num, count = 1;    // The variable count is used to count the number of times the loop has executed and hence has been initialized to 1.
    long int fact = 1;     // Since the value of factorial increases vary rapidly and even factorial of eight is larger than the range of a 2 byte 
                           // integer. Hence fact has been taken as a long int. fact = 1 not 0 because the factorial of 0 is 1, and setting fact to 
                           // 0 would result in an incorrect calculation of the factorial.

    printf("\nEnter number to find Factorial: ");
    scanf("%d", &num);

    while(count <= num) 
    {
        fact *= count;     // Initialization is a must to ignore unpredictable value of fact *= count.
        ++count;
       //or, fact = fact * count++; or, fact *= count++; (2nd version)
    }
/*  while (num > 0)
    {
        fact *= num;
        --num;
      //or, fact = fact * num--; or, fact *= num--; (3rd version)  
    }

    while( num > 0 && fact *= num--) (4th version)
*/    
    printf("\nThe required factorial of %d is %ld", num, fact);

/*2. C program to calculate the power of a number (i.e. base to the power of index or x^y ) using a while loop*/

    float x; int y, c = 1;
    float power = 1;
    printf("\nEnter base value: ");
    scanf("%f", &x);

    printf("\nEnter index value: ");
    scanf("%d", &y);

    while(c <= y) 
    {
        power = power * x;
        ++c;
    }
    // x multiplied y no. of times
/*
    while (y--)
        power = power * x;
*/    
    printf("\nThe required power is %f", power);

    return 0;
}
/*Note : 
  1. Initialization is a must. In uninitialized variable contains garbage or unpredictable value.
  2. The loop will run till the condition is true.
  3. The loop will run till the condition is true and the variable is less than the number.
  4. For series product initialize the product variable to 1 always (exceptions may be there).
  5. When calculating a factorial value take the factorial variable as a long int or float for better results.
  */