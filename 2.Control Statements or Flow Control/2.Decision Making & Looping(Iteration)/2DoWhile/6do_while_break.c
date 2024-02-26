/* Purpose: To calculate the sum of numbers entered by the user until zero is entered */

#include<stdio.h>
int main ()
{
    int n, s = 0;
    do
    {
        printf("\nEnter number: ");
        scanf("%d",&n);
        /* If zero is entered, break the loop */
        if (n == 0)            
        break;
        s += n;
    } while(1);                 
    
    printf("\nSum of numbers: %d",s); 
    return 0;   
}
