/* Purpose: To calculate the sum of numbers entered by the user, skipping zeros, until -1 is entered */

#include<stdio.h>
int main ()
{
    int n, s = 0;
    do
    {
        printf("\nEnter number: ");
        scanf("%d",&n);
        /* If zero is entered, skip the current iteration */
        if (n == 0)
        continue;
        s += n;
    } while(n != -1);                 
    
    printf("\nSum of numbers: %d",s); 
    return 0;   
}