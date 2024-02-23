/* A while loop may not have a proper loop body, and the loop header may end with a semicolon.*/
#include <stdio.h>
int main() 
{
    int x = 6;
    while (x--);   // No loop body here and the while header has semicolon placed after it.
    printf("x = %d", x);

/* C program to print numbers from 10 to 1*/
    int n=10;
    while(n>=1)
    {
        printf("%d ",n);
        n--;
    }
//or, while(printf("%d ",n), n--, n>1);  //No loop body here also

    printf("%d ",n);    
    return 0;
}