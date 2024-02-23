/* A program to evaluate the equation y = xⁿ , where n is a non-negative integer.*/

/* The variable y is initialized to 1 and then multiplied by x, n times using the while loop. The loop control variable count is initialized 
   outside the loop and incremented inside the loop. When the value of count becomes greater than n, the control exits the loop.*/

#include <stdio.h>
int main() 
{
    int count, n;
    float x, y;
    printf("Enter the value of x and n: ");
    scanf("%f %d", &x, &n);
    y = 1.0;
    count = 1;             /* Initialization, count is initialized outside the loop*/       
    while (count <= n)     /* Testing*/
    {
        y *= x;
        count++;           /* Incrementing*/
    } 
    printf("\nx = %f; n = %d; x to power n = %f\n", x, n, y);  
    return 0;
}   